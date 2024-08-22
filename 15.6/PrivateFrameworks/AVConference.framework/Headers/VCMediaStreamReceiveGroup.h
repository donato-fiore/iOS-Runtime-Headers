// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCMEDIASTREAMRECEIVEGROUP_H
#define VCMEDIASTREAMRECEIVEGROUP_H

@class NSMutableDictionary, NSNumber, NSString;
@protocol VCMediaStreamDelegate;


#import "VCMediaStreamGroup.h"

@interface VCMediaStreamReceiveGroup : VCMediaStreamGroup <VCMediaStreamDelegate>

 {
    BOOL _receivingEndToEndStream;
    NSMutableDictionary *_streamToMaxNetworkBitrate;
    NSMutableDictionary *_streamToActualNetworkBitrate;
}


@property (retain, nonatomic) NSNumber *activeStreamID; // ivar: _activeStreamID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *optedInStreamID; // ivar: _optedInStreamID
@property (readonly) Class superclass;


-(id)initWithConfig:(id)arg0 ;
-(void)dealloc;
-(void)notifyChangeInActiveMediaBitrateTo:(unsigned int)arg0 from:(unsigned int)arg1 ;
-(void)setActualBitrateForOptedInStreamWithActiveStreamID:(id)arg0 ;
-(void)setupMaxBitrateMap;
-(void)vcMediaStreamDidDecryptionTimeOut:(id)arg0 ;
-(void)vcMediaStreamDidDecryptionTimeOutForMKMRecovery:(id)arg0 ;
-(void)vcMediaStreamDidRTCPTimeOut:(id)arg0 ;
-(void)vcMediaStreamDidRTPTimeOut:(id)arg0 ;


@end


#endif