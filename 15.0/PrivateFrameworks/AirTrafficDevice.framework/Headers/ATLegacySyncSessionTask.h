// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATLEGACYSYNCSESSIONTASK_H
#define ATLEGACYSYNCSESSIONTASK_H

@class ATSessionTask, NSString;
@protocol ATClient, OS_dispatch_queue;



@interface ATLegacySyncSessionTask : ATSessionTask {
    id<ATClient> *_client;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy, nonatomic) NSString *dataClass;
@property (nonatomic) unsigned int grappaSessionID; // ivar: _grappaSessionID


-(id)initWithDataClass:(id)arg0 ;
-(id)sessionGroupingKey;
-(void)_finishWithError:(id)arg0 shouldAddAssetTask:(BOOL)arg1 ;
-(void)cancel;
-(void)prepareWithHostAnchor:(id)arg0 version:(id)arg1 ;
-(void)reconcileWithAnchor:(id)arg0 syncType:(unsigned int)arg1 ;
-(void)start;


@end


#endif