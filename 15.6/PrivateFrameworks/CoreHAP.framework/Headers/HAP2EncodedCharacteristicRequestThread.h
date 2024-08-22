// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAP2ENCODEDCHARACTERISTICREQUESTTHREAD_H
#define HAP2ENCODEDCHARACTERISTICREQUESTTHREAD_H

@class NSArray, NSString;
@protocol HAP2EncodedCharacteristicRequest;


#import "HAP2LoggingObject.h"

@interface HAP2EncodedCharacteristicRequestThread : HAP2LoggingObject <HAP2EncodedCharacteristicRequest>

 {
    BOOL _enforcePDUBodyLength;
    NSArray *_internalCharacteristics;
    NSUInteger _requestType;
}


@property (readonly, nonatomic) NSArray *btleRequests;
@property (readonly, nonatomic) NSArray *characteristics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type;


-(id)initWithBTLERequests:(id)arg0 requestType:(NSUInteger)arg1 enforcePDUBodyLength:(BOOL)arg2 ;
-(id)serialize;


@end


#endif