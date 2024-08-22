// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSSERVICECONNECTIONENDPOINT_H
#define BSSERVICECONNECTIONENDPOINT_H

@class NSString;
@protocol NSCopying, BSXPCCoding, BSXPCSecureCoding, NSSecureCoding, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface BSServiceConnectionEndpoint : NSObject <NSCopying, BSXPCCoding, BSXPCSecureCoding, NSSecureCoding>

 {
    NSString *_targetDescription;
    int _targetPID;
    NSObject<OS_xpc_object> *_endpoint;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *instance; // ivar: _instance
@property (readonly, nonatomic, getter=isNonLaunching) BOOL nonLaunching; // ivar: _nonLaunching
@property (readonly, copy, nonatomic) NSString *service; // ivar: _service
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *targetDescription;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(id)defaultShellMachName;
+(id)endpointForMachName:(id)arg0 service:(id)arg1 instance:(id)arg2 ;
+(id)endpointForSystemMachName:(id)arg0 service:(id)arg1 instance:(id)arg2 ;
+(id)nullEndpointForService:(id)arg0 instance:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToServiceEndpoint:(id)arg0 ;
-(BOOL)isNullEndpoint;
-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;
-(void)saveAsInjectorEndowmentForKey:(id)arg0 ;


@end


#endif