// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCMEDIANEGOTIATORRESULTSAUDIO_H
#define VCMEDIANEGOTIATORRESULTSAUDIO_H

@class NSMutableSet, NSArray;

#import <Foundation/Foundation.h>


@interface VCMediaNegotiatorResultsAudio : NSObject {
    NSMutableSet *_secondaryPayloads;
}


@property (nonatomic) BOOL allowRecording; // ivar: _allowRecording
@property (nonatomic) BOOL allowSwitching; // ivar: _allowSwitching
@property (nonatomic) unsigned int audioUnitModel; // ivar: _audioUnitModel
@property (nonatomic) int dtxPayload; // ivar: _dtxPayload
@property (nonatomic) int primaryPayload; // ivar: _primaryPayload
@property (nonatomic) int redPayload; // ivar: _redPayload
@property (nonatomic) unsigned int remoteSSRC; // ivar: _remoteSSRC
@property (readonly, nonatomic) NSArray *secondaryPayloads;
@property (nonatomic) BOOL useSBR; // ivar: _useSBR


-(id)init;
-(void)addSecondaryPayload:(int)arg0 ;
-(void)dealloc;


@end


#endif