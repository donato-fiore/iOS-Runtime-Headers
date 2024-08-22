// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSMANUALPREFETCHTRIGGER_H
#define BCSMANUALPREFETCHTRIGGER_H

@class NSString;
@protocol BCSPrefetchTrigger;

#import <Foundation/Foundation.h>


@interface BCSManualPrefetchTrigger : NSObject <BCSPrefetchTrigger>

 {
    id *_prefetchBlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)schedulePrefetchBlock:(id)arg0 ;
-(void)triggerPrefetchForReason:(NSUInteger)arg0 completion:(id)arg1 ;


@end


#endif