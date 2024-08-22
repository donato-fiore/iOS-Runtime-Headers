// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NGMFTVOUCHERSIGNATUREFORMATTER_H
#define NGMFTVOUCHERSIGNATUREFORMATTER_H

@class NSString, NSData;
@protocol SignatureFormatter;

#import <Foundation/Foundation.h>


@interface NGMFTVoucherSignatureFormatter : NSObject <SignatureFormatter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *signedData; // ivar: _signedData
@property (readonly) Class superclass;


-(id)initWithApplicationData:(id)arg0 ;


@end


#endif