// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RWIPROTOCOLINSPECTOR_H
#define RWIPROTOCOLINSPECTOR_H


#import <Foundation/Foundation.h>

#import "RWIProtocolConfiguration.h"

@interface RWIProtocolInspector : NSObject {
    *AugmentableInspectorController _inspectorController;
    RetainPtr<RWIProtocolConfiguration> _configuration;
    unique_ptr<RWIAugmentableInspectorControllerClient, std::default_delete<RWIAugmentableInspectorControllerClient>> _inspectorControllerClient;
}


@property (readonly, nonatomic) RWIProtocolConfiguration *configuration;
@property (readonly, nonatomic) BOOL connected;


-(id)initWithController:(struct AugmentableInspectorController *)arg0 ;
-(void)dealloc;
-(void)inspectorControllerDestroyed;


@end


#endif