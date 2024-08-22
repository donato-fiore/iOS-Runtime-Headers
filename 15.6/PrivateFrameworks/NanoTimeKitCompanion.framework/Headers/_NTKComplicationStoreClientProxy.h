// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NTKCOMPLICATIONSTORECLIENTPROXY_H
#define _NTKCOMPLICATIONSTORECLIENTPROXY_H

@protocol NTKComplicationStoreClient;

#import <Foundation/Foundation.h>


@interface _NTKComplicationStoreClientProxy : NSObject {
    id<NTKComplicationStoreClient> *_proxy;
}




-(id)initWithWeakProxy:(id)arg0 ;
-(void)loadFullCollectionWithLocalizableSampleTemplates:(id)arg0 complicationDescriptors:(id)arg1 seqId:(id)arg2 ;
-(void)removeComplicationSampleTemplatesForClientIdentifier:(id)arg0 descriptor:(id)arg1 seqId:(id)arg2 ;
-(void)updateComplicationDescriptors:(id)arg0 forClientIdentifier:(id)arg1 seqId:(id)arg2 ;
-(void)updateLocalizableSampleTemplate:(id)arg0 forClientIdentifier:(id)arg1 descriptor:(id)arg2 family:(NSInteger)arg3 seqId:(id)arg4 ;


@end


#endif