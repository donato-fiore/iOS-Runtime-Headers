// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUREMOTEVIDEOCLIENT_H
#define TUREMOTEVIDEOCLIENT_H

@class NSString, CALayer;
@protocol TURemoteVideoClient;

#import <Foundation/Foundation.h>


@interface TURemoteVideoClient : NSObject <TURemoteVideoClient>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger videoContextSlotIdentifier; // ivar: _videoContextSlotIdentifier
@property (retain, nonatomic) CALayer *videoLayer; // ivar: _videoLayer


-(id)init;
-(id)initWithVideoContextSlotIdentifier:(NSInteger)arg0 ;
-(id)nameForSubLayer;
-(void)cleanUpSubLayerForLayer:(id)arg0 ;
-(void)insertSubLayerInLayer:(id)arg0 videoSlotIdentifier:(NSInteger)arg1 ;


@end


#endif