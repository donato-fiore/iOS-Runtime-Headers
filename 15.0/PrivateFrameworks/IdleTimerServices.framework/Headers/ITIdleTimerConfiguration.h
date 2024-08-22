// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ITIDLETIMERCONFIGURATION_H
#define ITIDLETIMERCONFIGURATION_H

@class NSString;
@protocol NSCopying, BSXPCSecureCoding, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface ITIdleTimerConfiguration : NSObject <NSCopying, BSXPCSecureCoding, BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disablesTimer; // ivar: _disablesTimer
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic, getter=_identifier) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic, getter=_idleEventHandlerBlock, setter=_setIdleEventHandlerBlock:) id *idleEventHandlerBlock; // ivar: _idleEventHandlerBlock
@property (nonatomic, getter=_idleEventMask, setter=_setIdleEventMask:) NSUInteger idleEventMask; // ivar: _idleEventMask
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
+(id)configurationToDisableIdleTimer;
-(id)_copyWithNewIdentifier;
-(id)_uniquedReason:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif