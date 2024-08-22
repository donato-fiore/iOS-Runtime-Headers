// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPASSASSOCIATEDINFO_H
#define NPKPASSASSOCIATEDINFO_H

@class NSArray, PKTransitAppletState, PKTransitPassProperties;

#import <Foundation/Foundation.h>


@interface NPKPassAssociatedInfo : NSObject

@property (readonly, nonatomic) NSArray *balanceFields; // ivar: _balanceFields
@property (readonly, nonatomic) NSArray *commutePlanFields; // ivar: _commutePlanFields
@property (readonly, nonatomic) NSUInteger rangingSuspensionReason; // ivar: _rangingSuspensionReason
@property (readonly, nonatomic) NSArray *tiles; // ivar: _tiles
@property (readonly, nonatomic) PKTransitAppletState *transitAppletState; // ivar: _transitAppletState
@property (readonly, nonatomic) PKTransitPassProperties *transitProperties; // ivar: _transitProperties


-(id)description;
-(id)initWithTransitProperties:(id)arg0 appletState:(id)arg1 balanceFields:(id)arg2 commutePlanFields:(id)arg3 tiles:(id)arg4 rangingSuspensionReason:(NSUInteger)arg5 ;


@end


#endif