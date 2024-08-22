// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLDEBUGTEXTURELAYOUT_H
#define MTLDEBUGTEXTURELAYOUT_H

@class MTLTextureDescriptor;


#import "MTLToolsTextureLayout.h"
#import "MTLDebugDevice.h"

@interface MTLDebugTextureLayout : MTLToolsTextureLayout

@property (readonly, nonatomic) MTLDebugDevice *debugDevice; // ivar: _debugDevice
@property (readonly, copy, nonatomic) MTLTextureDescriptor *descriptor; // ivar: _descriptor


-(id)initWithBaseTextureLayout:(id)arg0 device:(id)arg1 descriptor:(id)arg2 ;
-(void)dealloc;


@end


#endif