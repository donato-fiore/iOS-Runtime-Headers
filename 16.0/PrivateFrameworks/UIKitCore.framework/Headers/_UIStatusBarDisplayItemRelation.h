// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARDISPLAYITEMRELATION_H
#define _UISTATUSBARDISPLAYITEMRELATION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _UIStatusBarDisplayItemRelation : NSObject

@property (readonly, nonatomic, getter=isFulfilled) BOOL fulfilled;
@property (readonly, nonatomic) NSArray *itemStates;


+(id)allRelationWithRelations:(id)arg0 ;
+(id)anyRelationWithRelations:(id)arg0 ;
+(id)exclusionWithDisplayItemState:(id)arg0 placement:(id)arg1 ;
+(id)requirementWithDisplayItemState:(id)arg0 placement:(id)arg1 ;
-(id)_ui_descriptionBuilder;
-(id)description;
-(id)type;


@end


#endif