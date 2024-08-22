// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKSHIDEVENTDISPATCHINGTARGET_H
#define BKSHIDEVENTDISPATCHINGTARGET_H

@class NSString;
@protocol NSSecureCoding, BSDescriptionStreamable, NSCopying;

#import <Foundation/Foundation.h>

#import "BKSHIDEventDeferringEnvironment.h"

@interface BKSHIDEventDispatchingTarget : NSObject <NSSecureCoding, BSDescriptionStreamable, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) BKSHIDEventDeferringEnvironment *deferringEnvironment; // ivar: _environment
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)focusTargetForPID:(int)arg0 ;
+(id)keyboardFocusTarget;
+(id)systemTarget;
+(id)targetForDeferringEnvironment:(id)arg0 ;
+(id)targetForPID:(int)arg0 environment:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithEnvironment:(id)arg0 pid:(int)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif