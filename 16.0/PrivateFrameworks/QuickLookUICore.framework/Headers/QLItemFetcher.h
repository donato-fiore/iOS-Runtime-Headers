// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLITEMFETCHER_H
#define QLITEMFETCHER_H

@class NSMapTable, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface QLItemFetcher : NSObject <NSSecureCoding>

 {
    NSMapTable *_observersToBlocks;
}


@property (nonatomic) NSInteger fetchingState; // ivar: _fetchingState
@property (readonly) NSNumber *itemSize;


+(BOOL)supportsSecureCoding;
-(BOOL)canBeCanceled;
-(BOOL)isLongFetchOperation;
-(id)fetchedContent;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)newItemProvider;
-(id)shareableItem;
-(void)_notifyObservers;
-(void)cancelFetch;
-(void)encodeWithCoder:(id)arg0 ;
// -(void)fetchContentWithAllowedOutputClasses:(id)arg0 inQueue:(id)arg1 updateBlock:(id)arg2 completionBlock:(unk)arg3  ;
-(void)prepareShareableItem:(id)arg0 ;
-(void)registerObserver:(id)arg0 withBlock:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif