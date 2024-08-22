// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSTILESTATE_H
#define PKPASSTILESTATE_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKPaymentPassAction.h"
#import "PKPassTileState.h"
#import "PKPassTileImage.h"
#import "PKPassTileStateMetadata.h"
#import "PKPassTileStateCheckIn.h"
#import "PKPassTileStateDefault.h"

@interface PKPassTileState : NSObject <NSSecureCoding>



@property (readonly, nonatomic) PKPaymentPassAction *action; // ivar: _action
@property (copy, nonatomic) NSDictionary *actionDictionary; // ivar: _actionDictionary
@property (retain, nonatomic) PKPassTileState *actionState; // ivar: _actionState
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) PKPassTileImage *icon; // ivar: _icon
@property (retain, nonatomic) PKPassTileStateMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic, getter=isResolved) BOOL resolved; // ivar: _resolved
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (readonly, nonatomic) PKPassTileStateCheckIn *stateTypeCheckIn;
@property (readonly, nonatomic) PKPassTileStateDefault *stateTypeDefault;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)_createForDictionary:(id)arg0 withTileType:(NSInteger)arg1 ;
+(id)_createWithType:(NSInteger)arg0 ;
-(BOOL)_setupWithDictionary:(id)arg0 ;
-(BOOL)isEqualToUnresolvedState:(id)arg0 ;
-(id)createResolvedStateWithBundle:(id)arg0 privateBundle:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif