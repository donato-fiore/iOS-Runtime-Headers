// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCOMPANIONADVERTISER_H
#define SFCOMPANIONADVERTISER_H

@class NSData, NSString;
@protocol SFCompanionAdvertiserDelegate;

#import <Foundation/Foundation.h>


@interface SFCompanionAdvertiser : NSObject

@property NSObject<SFCompanionAdvertiserDelegate> *delegate; // ivar: _delegate
@property (readonly) NSData *serviceEndpointData;
@property (readonly, copy) NSString *serviceType; // ivar: _serviceType
@property BOOL supportsStreams; // ivar: _supportsStreams


-(id)initWithServiceType:(id)arg0 ;
-(void)dealloc;
-(void)getContinuationStreamsWithEndpointData:(id)arg0 completionHandler:(id)arg1 ;
-(void)start;
-(void)stop;


@end


#endif