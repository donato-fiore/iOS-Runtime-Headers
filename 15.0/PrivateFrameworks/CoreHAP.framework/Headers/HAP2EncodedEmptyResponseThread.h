// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAP2ENCODEDEMPTYRESPONSETHREAD_H
#define HAP2ENCODEDEMPTYRESPONSETHREAD_H

@class NSString;
@protocol HAP2EncodedResponse;


#import "HAP2LoggingObject.h"

@interface HAP2EncodedEmptyResponseThread : HAP2LoggingObject <HAP2EncodedResponse>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif