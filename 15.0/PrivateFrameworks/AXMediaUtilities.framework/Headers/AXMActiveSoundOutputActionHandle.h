// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMACTIVESOUNDOUTPUTACTIONHANDLE_H
#define AXMACTIVESOUNDOUTPUTACTIONHANDLE_H

@protocol AXMActiveSoundOutputActionHandleProvider;


#import "AXMOutputActionHandle.h"

@interface AXMActiveSoundOutputActionHandle : AXMOutputActionHandle

@property (retain, nonatomic) NSObject<AXMActiveSoundOutputActionHandleProvider> *handleProvider; // ivar: _handleProvider
@property (nonatomic) float pitch;
@property (nonatomic) float rate;


-(void)setQuantizedRate:(NSInteger)arg0 ;
-(void)stop;


@end


#endif