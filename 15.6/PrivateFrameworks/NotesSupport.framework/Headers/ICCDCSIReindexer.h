// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICCDCSIREINDEXER_H
#define ICCDCSIREINDEXER_H

@class NSString, NSMutableArray;
@protocol ICReindexing;

#import <Foundation/Foundation.h>


@interface ICCDCSIReindexer : NSObject <ICReindexing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *registeredDelegates; // ivar: _registeredDelegates
@property (readonly) Class superclass;


+(id)searchableIndex;
+(id)sharedReindexer;
-(id)init;
-(void)_reindexSearchableItemsWithIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteAllSearchableItemsWithCompletionHandler:(id)arg0 ;
-(void)registerCoreDataCoreSpotlightDelegate:(id)arg0 ;
-(void)reindexAllSearchableItemsWithCompletionHandler:(id)arg0 ;
-(void)reindexSearchableItemsWithObjectIDURIs:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopIndexing;
-(void)unregisterCoreDataCoreSpotlightDelegate:(id)arg0 ;


@end


#endif