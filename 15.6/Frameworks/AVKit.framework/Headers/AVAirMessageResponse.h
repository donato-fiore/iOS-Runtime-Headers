// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVAIRMESSAGERESPONSE_H
#define AVAIRMESSAGERESPONSE_H

@class NSString;
@protocol AVMessageTransformerProtocol;

#import <Foundation/Foundation.h>


@interface AVAirMessageResponse : NSObject <AVMessageTransformerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (readonly, nonatomic) NSInteger status; // ivar: _status
@property (readonly) Class superclass;


+(id)messageWithParts:(id)arg0 ;
+(id)messageWithVersion:(id)arg0 headers:(id)arg1 bodyData:(id)arg2 ;
+(id)responseWithParts:(id)arg0 ;
-(id)bodyData;
-(id)headersForContentLength:(NSInteger)arg0 compression:(id)arg1 ;
-(id)initWithStatus:(NSInteger)arg0 localizedDescription:(id)arg1 ;
-(id)messageDataRepresentation;


@end


#endif