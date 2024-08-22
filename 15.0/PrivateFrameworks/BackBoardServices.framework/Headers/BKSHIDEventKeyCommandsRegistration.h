// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSHIDEVENTKEYCOMMANDSREGISTRATION_H
#define BKSHIDEVENTKEYCOMMANDSREGISTRATION_H

@class NSString, NSSet;
@protocol NSSecureCoding, BSDescriptionProviding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "BKSHIDEventDeferringEnvironment.h"
#import "BKSHIDEventDeferringToken.h"

@interface BKSHIDEventKeyCommandsRegistration : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying, NSMutableCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) BKSHIDEventDeferringEnvironment *deferringEnvironment; // ivar: _environment
@property (readonly, copy, nonatomic) BKSHIDEventDeferringToken *deferringToken; // ivar: _token
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSSet *keyCommands; // ivar: _keyCommands
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithEnvironment:(id)arg0 token:(id)arg1 keyCommands:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif