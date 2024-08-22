// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSPARSECABGROUPMANAGER_H
#define WBSPARSECABGROUPMANAGER_H

@class NSTimer, NSString;
@protocol WBSParsecABGroupStoreClient, WBSParsecABGroupStore;

#import <Foundation/Foundation.h>


@interface WBSParsecABGroupManager : NSObject <WBSParsecABGroupStoreClient>

 {
    NSTimer *_shuffleTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger groupIdentifier; // ivar: _groupIdentifier
@property (readonly, nonatomic) NSObject<WBSParsecABGroupStore> *groupStore; // ivar: _groupStore
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)_weightedRandomIdentifier;
+(NSUInteger)ephemeralGroupIdentifier;
-(id)initWithGroupStore:(id)arg0 ;
-(void)_generateAndSaveNewGroupIdentifier;
-(void)_postDidChangeGroupIdentifierNotification;
-(void)_scheduleShuffleTimer;
-(void)abGroupStoreDidUpdateGroupIdentifier:(id)arg0 ;
-(void)shuffleGroup;


@end


#endif