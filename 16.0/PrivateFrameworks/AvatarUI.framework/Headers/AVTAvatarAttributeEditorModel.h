// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTAVATARATTRIBUTEEDITORMODEL_H
#define AVTAVATARATTRIBUTEEDITORMODEL_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface AVTAvatarAttributeEditorModel : NSObject

@property (readonly, nonatomic) NSArray *categories; // ivar: _categories


+(id)diffOfSectionItems:(id)arg0 fromSectionItems:(id)arg1 ;
+(id)diffOfSections:(id)arg0 fromSections:(id)arg1 ;
-(id)differenceFromModel:(id)arg0 ;
-(id)initWithCategories:(id)arg0 ;


@end


#endif