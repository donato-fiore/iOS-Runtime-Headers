// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPPENDINGSETENUMERATOR_H
#define FPPENDINGSETENUMERATOR_H

@class NSString;
@protocol NSFileProviderPendingSetEnumerator;

#import <Foundation/Foundation.h>

#import "NSFileProviderManager.h"
#import "NSFileProviderDomainVersion.h"

@interface FPPendingSetEnumerator : NSObject <NSFileProviderPendingSetEnumerator>

 {
    NSFileProviderManager *_manager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSFileProviderDomainVersion *domainVersion; // ivar: _domainVersion
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isMaximumSizeReached) BOOL maximumSizeReached; // ivar: _maximumSizeReached
@property (readonly, nonatomic) CGFloat refreshInterval; // ivar: _refreshInterval
@property (readonly) Class superclass;


-(id)initWithManager:(id)arg0 ;
-(void)currentSyncAnchorWithCompletionHandler:(id)arg0 ;
-(void)enumerateChangesForObserver:(id)arg0 fromSyncAnchor:(id)arg1 ;
-(void)enumerateItemsForObserver:(id)arg0 startingAtPage:(id)arg1 ;
-(void)invalidate;


@end


#endif