// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEENDPOINTSIGNATURERESPONSE_H
#define SEENDPOINTSIGNATURERESPONSE_H

@class NSData;
@protocol NSSecureCoding, SESEndPointSignature;

#import <Foundation/Foundation.h>


@interface SEEndPointSignatureResponse : NSObject <NSSecureCoding, SESEndPointSignature>



@property (retain, nonatomic) NSData *signature; // ivar: _signature
@property (retain, nonatomic) NSData *signedData; // ivar: _signedData


+(BOOL)supportsSecureCoding;
+(id)responseWithSignedData:(id)arg0 signature:(id)arg1 ;
+(id)signature:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif