// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BMLIGHTHOUSELEDGERLIBRARYNODE_H
#define _BMLIGHTHOUSELEDGERLIBRARYNODE_H

@class BMLibraryNode;



@interface _BMLighthouseLedgerLibraryNode : BMLibraryNode



+(id)LighthousePluginEvent;
+(id)MlruntimedEvent;
+(id)TrialdEvent;
+(id)configurationForLighthousePluginEvent;
+(id)configurationForMlruntimedEvent;
+(id)configurationForTrialdEvent;
+(id)identifier;
+(id)storeConfigurationForLighthousePluginEvent;
+(id)storeConfigurationForMlruntimedEvent;
+(id)storeConfigurationForTrialdEvent;
+(id)streamNames;
+(id)streamWithName:(id)arg0 ;
+(id)sublibraries;
+(id)syncPolicyForLighthousePluginEvent;
+(id)syncPolicyForMlruntimedEvent;
+(id)syncPolicyForTrialdEvent;
+(id)validKeyPaths;


@end


#endif