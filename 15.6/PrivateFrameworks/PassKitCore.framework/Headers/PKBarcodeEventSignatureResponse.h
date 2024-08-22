// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKBARCODEEVENTSIGNATURERESPONSE_H
#define PKBARCODEEVENTSIGNATURERESPONSE_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKBarcodeEventSignatureResponse : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSData *signedData; // ivar: _signedData


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSignedData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif