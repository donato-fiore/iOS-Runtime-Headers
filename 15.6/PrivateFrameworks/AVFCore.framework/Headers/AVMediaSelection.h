// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVMEDIASELECTION_H
#define AVMEDIASELECTION_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "AVMediaSelectionInternal.h"
#import "AVAsset.h"

@interface AVMediaSelection : NSObject <NSCopying, NSMutableCopying>

 {
    AVMediaSelectionInternal *_mediaSelection;
}


@property (readonly, weak, nonatomic) AVAsset *asset;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup:(id)arg0 ;
-(NSUInteger)hash;
-(id)_dictionaryGroupsWithSelectedOption;
-(id)_groupDictionaries;
-(id)_initWithAsset:(id)arg0 ;
-(id)_initWithAsset:(id)arg0 selectedMediaArray:(id)arg1 ;
-(id)_initWithAssetWithoutGroupDictionaries:(id)arg0 ;
-(id)_initWithDeferredLoadingOfAsset:(id)arg0 selectedMediaArray:(id)arg1 ;
-(id)_internal;
-(id)_propertyListForSelectedMediaOptionInMediaSelectionGroup:(id)arg0 ;
-(id)_selectedMediaArray;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAsset:(id)arg0 propertyList:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)propertyList;
-(id)selectedMediaOptionInMediaSelectionGroup:(id)arg0 ;
-(void)_createDefaultMediaSelectionOptions;
-(void)_loadiVarsIfNeeded;
-(void)dealloc;


@end


#endif