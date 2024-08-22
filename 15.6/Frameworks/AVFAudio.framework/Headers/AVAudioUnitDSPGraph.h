// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVAUDIOUNITDSPGRAPH_H
#define AVAUDIOUNITDSPGRAPH_H

@class NSURL;


#import "AVAudioUnit.h"

@interface AVAudioUnitDSPGraph : AVAudioUnit

@property (readonly, nonatomic) NSURL *auProcessingStripURL;
@property (readonly, nonatomic) NSURL *dspGraphURL;


-(BOOL)loadAudioDSPManager;
-(BOOL)loadAudioUnitProcessingStripAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)loadDSPGraphAtURL:(id)arg0 error:(*id)arg1 ;
-(id)init;


@end


#endif