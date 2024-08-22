// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXSWITCHRECIPEMAPPING_H
#define AXSWITCHRECIPEMAPPING_H

@class NSString, NSUUID;

#import <Foundation/Foundation.h>

#import "AXReplayableGesture.h"

@interface AXSwitchRecipeMapping : NSObject

@property (copy, nonatomic) NSString *action; // ivar: _action
@property (retain, nonatomic) AXReplayableGesture *gesture; // ivar: _gesture
@property (nonatomic) CGPoint holdPoint; // ivar: _holdPoint
@property (copy, nonatomic) NSString *longPressAction; // ivar: _longPressAction
@property (retain, nonatomic) AXReplayableGesture *longPressGesture; // ivar: _longPressGesture
@property (nonatomic, getter=isOptional) BOOL optional; // ivar: _optional
@property (nonatomic) NSInteger switchOriginalAction; // ivar: _switchOriginalAction
@property (copy, nonatomic) NSUUID *switchUUID; // ivar: _switchUUID


+(id)recipeMappingWithDictionaryRepresentation:(id)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;


@end


#endif