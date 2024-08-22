// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCMOCKIDSDATACHANNELLINKCONTEXT_H
#define VCMOCKIDSDATACHANNELLINKCONTEXT_H

@class IDSDataChannelLinkContext;



@interface VCMockIDSDataChannelLinkContext : IDSDataChannelLinkContext {
    BOOL _forceNetworkCellular;
    BOOL _isTestingOneToOne;
}




-(BOOL)isVirtualRelayLink;
-(NSInteger)connectionType;
-(id)init;
-(unsigned int)RATType;
-(unsigned int)remoteRATType;


@end


#endif