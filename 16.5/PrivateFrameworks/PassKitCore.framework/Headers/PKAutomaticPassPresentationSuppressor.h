// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAUTOMATICPASSPRESENTATIONSUPPRESSOR_H
#define PKAUTOMATICPASSPRESENTATIONSUPPRESSOR_H

@class NSMutableIndexSet, NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKAssertion.h"

@interface PKAutomaticPassPresentationSuppressor : NSObject {
    PKAssertion *_suppressionAssertion;
    NSMutableIndexSet *_suppressionRequestTokens;
    NSMutableIndexSet *_backgrounedSuppressionIdentifiers;
    NSDate *_backgroundedDate;
    NSUInteger _nextRequestToken;
    NSObject<OS_dispatch_queue> *_suppressorQueue;
}


@property (readonly, nonatomic) BOOL isSuppressing;


+(id)sharedInstance;
-(NSUInteger)requestSuppressionWithResponseHandler:(id)arg0 ;
-(id)init;
-(void)_acquireSuppressionAssertionIfNeededWithCompletion:(id)arg0 ;
-(void)_acquireSuppressionAssertionWithCompletion:(id)arg0 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)dealloc;
-(void)endSuppressionWithRequestToken:(NSUInteger)arg0 ;


@end


#endif