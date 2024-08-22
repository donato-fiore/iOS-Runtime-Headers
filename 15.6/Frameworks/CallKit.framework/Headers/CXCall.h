// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CXCALL_H
#define CXCALL_H

@class NSUUID, NSString;
@protocol NSSecureCoding, CXCopying;

#import <Foundation/Foundation.h>


@interface CXCall : NSObject <NSSecureCoding, CXCopying>



@property (readonly, copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEndpointOnCurrentDevice) BOOL endpointOnCurrentDevice; // ivar: _endpointOnCurrentDevice
@property (nonatomic) BOOL hasConnected; // ivar: _hasConnected
@property (nonatomic) BOOL hasEnded; // ivar: _hasEnded
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHostedOnCurrentDevice) BOOL hostedOnCurrentDevice; // ivar: _hostedOnCurrentDevice
@property (nonatomic, getter=isOnHold) BOOL onHold; // ivar: _onHold
@property (nonatomic, getter=isOutgoing) BOOL outgoing; // ivar: _outgoing
@property (retain, nonatomic) NSString *providerIdentifier; // ivar: _providerIdentifier
@property (readonly) Class superclass;
@property (nonatomic, getter=isVideo) BOOL video; // ivar: _video


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCall:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 ;
-(id)sanitizedCopy;
-(id)sanitizedCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;
-(void)updateSanitizedCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif