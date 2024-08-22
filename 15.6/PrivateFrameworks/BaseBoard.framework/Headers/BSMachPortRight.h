// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSMACHPORTRIGHT_H
#define BSMACHPORTRIGHT_H

@class NSString;
@protocol BSXPCCoding, NSSecureCoding, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface BSMachPortRight : NSObject <BSXPCCoding, NSSecureCoding, BSInvalidatable>

 {
    os_unfair_lock_s _invalidationLock;
    os_unfair_lock_s _lock;
    unsigned int _lock_port;
    unsigned int _rawPort;
    char _type;
    char _owner;
    unsigned char _lock_accessCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *trace; // ivar: _trace


+(BOOL)supportsSecureCoding;
+(char)_type;
-(BOOL)isUsable;
-(BOOL)isValid;
-(BOOL)matchesPortOfRight:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(unsigned int)extractPort;
-(unsigned int)extractPortAndIKnowWhatImDoingISwear;
-(unsigned int)port;
-(unsigned int)rawPort;
-(void)accessPort:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;
-(void)invalidate;


@end


#endif