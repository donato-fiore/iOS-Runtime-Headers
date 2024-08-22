// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPMATERIALIZEDSETENUMERATOR_H
#define FPMATERIALIZEDSETENUMERATOR_H

@class NSString;
@protocol NSFileProviderEnumerator;

#import <Foundation/Foundation.h>

#import "NSFileProviderManager.h"

@interface FPMaterializedSetEnumerator : NSObject <NSFileProviderEnumerator>

 {
    NSFileProviderManager *_manager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithManager:(id)arg0 ;
-(void)currentSyncAnchorWithCompletionHandler:(id)arg0 ;
-(void)enumerateChangesForObserver:(id)arg0 fromSyncAnchor:(id)arg1 ;
-(void)enumerateItemsForObserver:(id)arg0 startingAtPage:(id)arg1 ;
-(void)invalidate;


@end


#endif