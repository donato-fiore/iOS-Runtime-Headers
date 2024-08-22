// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFDISPATCHINGFAIRPLAYVALIDATIONMANAGING_H
#define PFDISPATCHINGFAIRPLAYVALIDATIONMANAGING_H

@protocol PFFairPlayValidationManaging;

#import <Foundation/Foundation.h>


@interface PFDispatchingFairPlayValidationManaging : NSObject <PFFairPlayValidationManaging>

 {
    ? wrappedInstance;
    ? responseQueue;
}




+(id)receiveOn:(id)arg0 manager:(id)arg1 ;
-(id)init;
-(void)validateDownloadedEpisodesWithCompletion:(id)arg0 ;


@end


#endif