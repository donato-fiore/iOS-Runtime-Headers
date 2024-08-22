// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOCTAGREGISTRY_H
#define DOCTAGREGISTRY_H

@class NSString, NSMutableOrderedSet;
@protocol DOCTagRegistryDelegate;

#import <Foundation/Foundation.h>

#import "DOCTagRegistryICloudDataSource.h"

@interface DOCTagRegistry : NSObject <DOCTagRegistryDelegate>

 {
    int _localStorageDidUpdateNotifyToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableOrderedSet *discoveredTags; // ivar: _discoveredTags
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) DOCTagRegistryICloudDataSource *iCloudDataSource; // ivar: _iCloudDataSource
@property (nonatomic) BOOL inBatchUpdate; // ivar: _inBatchUpdate
@property (nonatomic) BOOL shouldSynchronizeAfterBatchUpdate; // ivar: _shouldSynchronizeAfterBatchUpdate
@property (readonly) Class superclass;
@property (nonatomic) NSInteger tagSerialNumber; // ivar: _tagSerialNumber
@property (retain, nonatomic) NSMutableOrderedSet *userTags; // ivar: _userTags


+(id)sanitizedTagName:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)_canAddTag:(id)arg0 ;
-(BOOL)addTag:(id)arg0 ;
-(BOOL)canReplaceTag:(id)arg0 withTag:(id)arg1 ;
-(BOOL)insertTag:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(BOOL)isValidNewTagName:(id)arg0 ;
-(BOOL)moveTag:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(BOOL)replaceTag:(id)arg0 withTag:(id)arg1 ;
-(id)_memberTag:(id)arg0 ;
-(id)_setForTagType:(NSInteger)arg0 ;
-(id)_tagNameForComparing:(id)arg0 ;
-(id)init;
-(id)tagForName:(id)arg0 ;
-(void)addTag:(id)arg0 options:(NSInteger)arg1 ;
-(void)addTags:(id)arg0 options:(NSInteger)arg1 ;
-(void)dealloc;
-(void)removeAllTagsOfType:(NSInteger)arg0 ;
-(void)removeTags:(id)arg0 ;
-(void)synchronize;


@end


#endif