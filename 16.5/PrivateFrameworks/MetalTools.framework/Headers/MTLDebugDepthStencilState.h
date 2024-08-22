// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLDEBUGDEPTHSTENCILSTATE_H
#define MTLDEBUGDEPTHSTENCILSTATE_H

@class MTLDepthStencilDescriptor;


#import "MTLToolsDepthStencilState.h"

@interface MTLDebugDepthStencilState : MTLToolsDepthStencilState

@property (readonly, nonatomic) unsigned char attachmentWriteMask; // ivar: _attachmentWriteMask
@property (readonly, nonatomic) MTLDepthStencilDescriptor *descriptor; // ivar: _descriptor


-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithDepthStencilState:(id)arg0 descriptor:(id)arg1 device:(id)arg2 ;
-(void)dealloc;


@end


#endif