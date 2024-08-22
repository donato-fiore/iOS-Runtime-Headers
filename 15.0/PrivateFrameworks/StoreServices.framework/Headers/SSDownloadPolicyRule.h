// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSDOWNLOADPOLICYRULE_H
#define SSDOWNLOADPOLICYRULE_H

@class NSSet, NSString;
@protocol NSSecureCoding, SSXPCCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SSDownloadPolicyRule : NSObject <NSSecureCoding, SSXPCCoding, NSCopying>



@property (copy, nonatomic) NSSet *applicationStates; // ivar: _applicationStates
@property (nonatomic) float batteryLevel; // ivar: _batteryLevel
@property (readonly, nonatomic, getter=isCellularAllowed) BOOL cellularAllowed;
@property (nonatomic) NSInteger cellularDataStates; // ivar: _cellularDataStates
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger downloadSizeLimit; // ivar: _downloadSizeLimit
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSSet *networkTypes; // ivar: _networkTypes
@property (nonatomic) NSInteger powerStates; // ivar: _powerStates
@property (nonatomic) NSInteger registrationStates; // ivar: _registrationStates
@property (readonly) Class superclass;
@property (nonatomic) NSInteger timeLimitStates; // ivar: _timeLimitStates
@property (copy, nonatomic) NSSet *userDefaultStates; // ivar: _userDefaultStates
@property (readonly, nonatomic, getter=isWiFiAllowed) BOOL wiFiAllowed;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)addApplicationState:(id)arg0 ;
-(void)addNetworkType:(NSInteger)arg0 ;
-(void)addUserDefaultState:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)unionPolicyRule:(id)arg0 ;


@end


#endif