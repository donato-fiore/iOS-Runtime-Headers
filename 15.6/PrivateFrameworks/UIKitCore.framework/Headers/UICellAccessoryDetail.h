// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UICELLACCESSORYDETAIL_H
#define UICELLACCESSORYDETAIL_H



#import "UICellAccessory.h"

@interface UICellAccessoryDetail : UICellAccessory

@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_systemType;
-(NSInteger)_systemTypePlacementForHeader:(BOOL)arg0 ;
-(id)_identifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif