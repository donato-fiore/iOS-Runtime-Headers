// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGNAMEDENTITYDISSECTOR_H
#define SGNAMEDENTITYDISSECTOR_H

@class _PASLock, NSString;
@protocol SGMailMessageProcessing, SGTextMessageProcessing;


#import "SGPipelineDissector.h"

@interface SGNamedEntityDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing>

 {
    int _linguisticDataNotificationToken;
    _PASLock *_lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_collectDataDetectorsWithText:(id)arg0 algorithms:(id)arg1 dataDetections:(id)arg2 isMessagesSource:(BOOL)arg3 addNamedEntity:(id)arg4 ;
-(id)_entitiesInPlainText:(id)arg0 withEligibleRegions:(id)arg1 dataDetections:(id)arg2 source:(id)arg3 cloudSync:(BOOL)arg4 algorithms:(id)arg5 ;
-(id)entitiesInPlainText:(id)arg0 withEligibleRegions:(id)arg1 source:(id)arg2 cloudSync:(BOOL)arg3 algorithms:(id)arg4 ;
-(id)init;
-(id)initWithPurgeableGazetteer:(id)arg0 ;
// -(void)_collectAugmentedGazetteerWithText:(id)arg0 addNamedEntity:(id)arg1 addTopic:(unk)arg2 addLocation:(id)arg3  ;
-(void)_dissectMessage:(id)arg0 entity:(id)arg1 context:(id)arg2 ;
-(void)_harvestLocationFromEntity:(id)arg0 category:(NSUInteger)arg1 dynamicCategory:(id)arg2 enrichment:(id)arg3 algorithm:(unsigned short)arg4 ;
-(void)_registerForNotifications;
-(void)_resetGazetteer;
-(void)dealloc;
-(void)dissectMailMessage:(id)arg0 entity:(id)arg1 context:(id)arg2 ;
-(void)dissectTextMessage:(id)arg0 entity:(id)arg1 context:(id)arg2 ;


@end


#endif