// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMOCKIDSDATACHANNELLINKCONTEXT_H
#define VCMOCKIDSDATACHANNELLINKCONTEXT_H

@class IDSDataChannelLinkContext;



@interface VCMockIDSDataChannelLinkContext : IDSDataChannelLinkContext {
    BOOL _forceNetworkCellular;
}


@property (nonatomic) BOOL idsUPlusOneMode; // ivar: _idsUPlusOneMode


-(BOOL)isVirtualRelayLink;
-(NSInteger)connectionType;
-(id)init;
-(unsigned int)RATType;
-(unsigned int)remoteRATType;


@end


#endif