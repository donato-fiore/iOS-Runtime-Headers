// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSQRCODEPAYLOAD_H
#define BCSQRCODEPAYLOAD_H

@class CIBarcodeDescriptor, NSString;
@protocol BCSCodePayload;

#import <Foundation/Foundation.h>


@interface BCSQRCodePayload : NSObject <BCSCodePayload>

 {
    CIBarcodeDescriptor *_barcodeDescriptor;
}


@property (readonly, nonatomic) NSInteger codeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithBarcodeDescriptor:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)savePayloadInUserActivity:(id)arg0 ;


@end


#endif