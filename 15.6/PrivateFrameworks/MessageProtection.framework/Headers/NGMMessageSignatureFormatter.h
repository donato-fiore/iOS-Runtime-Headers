// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NGMMESSAGESIGNATUREFORMATTER_H
#define NGMMESSAGESIGNATUREFORMATTER_H

@class NSString, NSData;
@protocol SignatureFormatter;

#import <Foundation/Foundation.h>


@interface NGMMessageSignatureFormatter : NSObject <SignatureFormatter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSData *formattedSignedData; // ivar: _formattedSignedData
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDHOutput:(id)arg0 prekeyPub:(id)arg1 ephemeralPub:(id)arg2 recipientPub:(id)arg3 ciphertext:(id)arg4 ;
-(id)signedData;


@end


#endif