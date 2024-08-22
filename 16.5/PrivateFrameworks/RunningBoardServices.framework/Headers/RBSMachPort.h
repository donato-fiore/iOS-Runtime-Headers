// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBSMACHPORT_H
#define RBSMACHPORT_H

@class NSString;
@protocol RBSXPCSecureCoding, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface RBSMachPort : NSObject <RBSXPCSecureCoding, NSSecureCoding, NSCopying>

 {
    unsigned int _port;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsRBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(id)portConsumingRightForPort:(unsigned int)arg0 ;
+(id)portForPort:(unsigned int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isUsable;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(unsigned int)port;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;
-(void)invalidate;


@end


#endif