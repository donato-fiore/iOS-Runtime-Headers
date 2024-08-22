// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXCHANNELSOURCE_H
#define CXCHANNELSOURCE_H

@class NSString;
@protocol CXChannelProviderVendorProtocol, CXChannelSourceDelegate;


#import "CXAbstractProviderSource.h"

@interface CXChannelSource : CXAbstractProviderSource <CXChannelProviderVendorProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CXChannelSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)handleAudioSessionActivationStateChangedTo:(id)arg0 ;


@end


#endif