// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UICELLACCESSORYINSERT_H
#define UICELLACCESSORYINSERT_H



#import "UICellAccessory.h"
#import "UIColor.h"

@interface UICellAccessoryInsert : UICellAccessory

@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (retain, nonatomic) UIColor *backgroundColor;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_systemType;
-(NSInteger)_systemTypePlacementForHeader:(BOOL)arg0 ;
-(id)_identifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif