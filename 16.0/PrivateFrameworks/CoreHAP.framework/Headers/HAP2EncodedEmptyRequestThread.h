// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAP2ENCODEDEMPTYREQUESTTHREAD_H
#define HAP2ENCODEDEMPTYREQUESTTHREAD_H

@class NSString;
@protocol HAP2EncodedRequest;


#import "HAP2LoggingObject.h"

@interface HAP2EncodedEmptyRequestThread : HAP2LoggingObject <HAP2EncodedRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger requestType; // ivar: _requestType
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type;


-(id)body;
-(id)initWithRequestType:(NSUInteger)arg0 ;
-(id)serialize;


@end


#endif