// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKREQUESTCERTIFICATESIDSMESSAGE_H
#define CRKREQUESTCERTIFICATESIDSMESSAGE_H

@class DMFControlGroupIdentifier, NSString, NSDictionary, NSUUID, NSData;
@protocol CRKIDSMessage;

#import <Foundation/Foundation.h>


@interface CRKRequestCertificatesIDSMessage : NSObject <CRKIDSMessage>



@property (readonly, nonatomic) DMFControlGroupIdentifier *controlGroupIdentifier; // ivar: _controlGroupIdentifier
@property (readonly, copy, nonatomic) NSString *destinationDeviceIdentifier; // ivar: _destinationDeviceIdentifier
@property (readonly, nonatomic) NSInteger destinationRole; // ivar: _destinationRole
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) NSInteger messageType;
@property (readonly, nonatomic) NSUUID *requestIdentifier; // ivar: _requestIdentifier
@property (readonly, copy, nonatomic) NSData *requesterCertificate; // ivar: _requesterCertificate
@property (readonly, nonatomic) NSInteger sourceRole; // ivar: _sourceRole


+(id)instanceWithDictionary:(id)arg0 ;
+(id)messageWithControlGroupIdentifier:(id)arg0 destinationDeviceIdentifier:(id)arg1 sourceRole:(NSInteger)arg2 destinationRole:(NSInteger)arg3 requesterCertificate:(id)arg4 ;
-(id)initWithRequestIdentifier:(id)arg0 controlGroupIdentifier:(id)arg1 destinationDeviceIdentifier:(id)arg2 sourceRole:(NSInteger)arg3 destinationRole:(NSInteger)arg4 requesterCertificate:(id)arg5 ;


@end


#endif