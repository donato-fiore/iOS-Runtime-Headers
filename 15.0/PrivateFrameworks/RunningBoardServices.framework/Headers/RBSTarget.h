// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBSTARGET_H
#define RBSTARGET_H

@class NSString;
@protocol RBSXPCSecureCoding, RBSProcessMatching, NSCopying, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "RBSProcessIdentifier.h"
#import "RBSProcessIdentity.h"

@interface RBSTarget : NSObject <RBSXPCSecureCoding, RBSProcessMatching, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSObject<OS_xpc_object> *endpoint; // ivar: _endpoint
@property (readonly, copy, nonatomic) NSString *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) RBSProcessIdentifier *processIdentifier; // ivar: _processIdentifier
@property (readonly, nonatomic) RBSProcessIdentity *processIdentity; // ivar: _processIdentity
@property (readonly, nonatomic) NSString *shortDescription; // ivar: _shortDescription
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSystem) BOOL system;


+(BOOL)supportsRBSXPCSecureCoding;
+(id)currentProcess;
+(id)systemTarget;
+(id)targetWithEndpoint:(id)arg0 ;
+(id)targetWithPid:(int)arg0 ;
+(id)targetWithPid:(int)arg0 environmentIdentifier:(id)arg1 ;
+(id)targetWithProcessIdentifier:(id)arg0 ;
+(id)targetWithProcessIdentifier:(id)arg0 environmentIdentifier:(id)arg1 ;
+(id)targetWithProcessIdentity:(id)arg0 ;
+(id)targetWithProcessIdentity:(id)arg0 environmentIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesProcess:(id)arg0 ;
-(id)copyWithEuid:(unsigned int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(id)processPredicate;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif