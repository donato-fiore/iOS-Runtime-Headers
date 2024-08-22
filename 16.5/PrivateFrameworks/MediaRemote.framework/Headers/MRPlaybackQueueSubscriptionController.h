// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRPLAYBACKQUEUESUBSCRIPTIONCONTROLLER_H
#define MRPLAYBACKQUEUESUBSCRIPTIONCONTROLLER_H

@class NSMutableArray, NSMutableSet, MSVMutableBidirectionalDictionary;
@protocol NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MRPlayerPath.h"

@interface MRPlaybackQueueSubscriptionController : NSObject <NSSecureCoding>

 {
    NSMutableArray *_requestFilters;
    NSMutableSet *_requests;
    MSVMutableBidirectionalDictionary *_offsets;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) MRPlayerPath *playerPath; // ivar: _playerPath


+(BOOL)supportsSecureCoding;
-(BOOL)hasRequest:(id)arg0 ;
-(id)contentItemIdentifierForOffset:(NSInteger)arg0 ;
-(id)description;
-(id)filteredContentItemsBySubscriptionsForContentItems:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlayerPath:(id)arg0 ;
-(id)offsetForIdentifier:(id)arg0 ;
-(id)requestForSubscribedContentItemIdentifier:(id)arg0 ;
-(void)addRequest:(id)arg0 ;
-(void)augmentCommandOptions:(id)arg0 forCommand:(unsigned int)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateFilteredContentItemsBySubscriptionsForContentItems:(id)arg0 block:(id)arg1 ;
-(void)invalidate;
-(void)removeRequest:(id)arg0 ;
-(void)restoreStateFromController:(id)arg0 ;
-(void)subscribeToPlaybackQueue:(id)arg0 forRequest:(id)arg1 ;


@end


#endif