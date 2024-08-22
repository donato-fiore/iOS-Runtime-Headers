// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCCAPTIONSRECEIVER_H
#define VCCAPTIONSRECEIVER_H

@protocol VCCaptionsReceiverDelegate;

#import <Foundation/Foundation.h>

#import "VCCaptionsTranscription.h"

@interface VCCaptionsReceiver : NSObject {
    unsigned int _captionsLastUtteranceNumber;
    unsigned int _captionsLastUpdateNumber;
    *opaqueVCCaptionsDecoder _captionsDecoder;
}


@property (retain, nonatomic) VCCaptionsTranscription *currentTranscription; // ivar: _currentTranscription
@property (readonly) NSObject<VCCaptionsReceiverDelegate> *delegate; // ivar: _delegate


-(id)initWithDelegate:(id)arg0 ;
-(void)dealloc;
-(void)processCaptionsData:(id)arg0 ;


@end


#endif