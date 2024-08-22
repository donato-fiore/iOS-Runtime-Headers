// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPNAMEDENTITYDISSECTOR_H
#define PPNAMEDENTITYDISSECTOR_H

@class _PASLock, NSString;

#import <Foundation/Foundation.h>


@interface PPNamedEntityDissector : NSObject {
    int _linguisticDataNotificationToken;
    _PASLock *_lock;
    NSString *_userLanguage;
    BOOL _userIsMultilingual;
    NSString *_meCardContactsIdentifier;
}




+(id)sharedInstance;
-(id)_collectDataDetectorsWithText:(id)arg0 algorithms:(id)arg1 isMessagesSource:(BOOL)arg2 addNamedEntity:(id)arg3 ;
-(id)entitiesInPlainText:(id)arg0 eligibleRegions:(id)arg1 source:(id)arg2 cloudSync:(BOOL)arg3 ;
-(id)entitiesInPlainText:(id)arg0 eligibleRegions:(id)arg1 source:(id)arg2 cloudSync:(BOOL)arg3 algorithms:(id)arg4 ;
-(id)init;
-(id)initWithPurgeableGazetteer:(id)arg0 ;
// -(void)_collectAugmentedGazetteerWithText:(id)arg0 addNamedEntity:(id)arg1 addTopic:(unk)arg2 addLocation:(id)arg3  ;
-(void)_harvestLocationFromEntity:(id)arg0 category:(NSUInteger)arg1 dynamicCategory:(id)arg2 enrichment:(id)arg3 algorithm:(unsigned short)arg4 ;
-(void)_registerForNotifications;
-(void)_resetGazetteer;
-(void)dealloc;


@end


#endif