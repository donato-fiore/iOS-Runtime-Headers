// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VN3XKGTKNBVY6H4RFTPXLYW_H
#define VN3XKGTKNBVY6H4RFTPXLYW_H



#import "VNObservation.h"
#import "VN6B8mkraBUpwUqskMYPtS3.h"
#import "VN6Ac6Cyl5O5oK19HboyMBR.h"

@interface VN3XKGTKNBvy6h4RFtpxLyW : VNObservation

@property (readonly) VN6B8mkraBUpwUqskMYPtS3 *imageSignatureHash; // ivar: _imageSignatureHash
@property (readonly) VN6Ac6Cyl5O5oK19HboyMBR *imageSignatureprint; // ivar: _imageSignatureprint


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 imageSignatureprint:(id)arg1 imageSignatureHash:(id)arg2 ;
-(id)vn_cloneObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif