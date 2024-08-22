// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CWFAWDLPEERTRAFFICREGISTRATION_H
#define CWFAWDLPEERTRAFFICREGISTRATION_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CWFAWDLPeerTrafficRegistration : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (nonatomic) NSUInteger desiredBandwidth; // ivar: _desiredBandwidth
@property (nonatomic) NSUInteger desiredLatency; // ivar: _desiredLatency
@property (copy, nonatomic) NSArray *peerContextList; // ivar: _peerContextList
@property (nonatomic) NSUInteger preferredChannel; // ivar: _preferredChannel
@property (nonatomic) NSUInteger secondaryPreferredChannel; // ivar: _secondaryPreferredChannel
@property (copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (nonatomic) int sessionFlags; // ivar: _sessionFlags


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAWDLPeerTrafficRegistration:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif