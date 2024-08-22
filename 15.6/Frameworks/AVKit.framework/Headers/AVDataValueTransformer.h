// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVDATAVALUETRANSFORMER_H
#define AVDATAVALUETRANSFORMER_H

@class NSString;
@protocol AVAirTransportTransformationProtocol;

#import <Foundation/Foundation.h>


@interface AVDataValueTransformer : NSObject <AVAirTransportTransformationProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)messageTransformerWithClass:(Class)arg0 ;
-(id)dataForMessage:(id)arg0 ;
-(id)reverseTransformerForMessageData:(id)arg0 ;


@end


#endif