// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLASTDOORAPSUSERPAYLOADHTTPHEADERS_H
#define BLASTDOORAPSUSERPAYLOADHTTPHEADERS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BlastDoorAPSUserPayloadHttpHeaders : NSObject {
    ? aPSUserPayloadHttpHeaders;
}


@property (nonatomic, readonly) NSString *adhocServiceOverride;
@property (nonatomic, readonly) NSString *asHttpHeader;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *responseIdentifierString;
@property (nonatomic, readonly) NSString *splunkHint;
@property (nonatomic, readonly) NSString *strictTransportSecurity;
@property (nonatomic, readonly) NSString *traceId;


-(id)init;


@end


#endif