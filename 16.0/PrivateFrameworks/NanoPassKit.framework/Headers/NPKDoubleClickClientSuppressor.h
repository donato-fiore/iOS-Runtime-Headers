// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKDOUBLECLICKCLIENTSUPPRESSOR_H
#define NPKDOUBLECLICKCLIENTSUPPRESSOR_H

@class NSMutableIndexSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NPKAssertion.h"

@interface NPKDoubleClickClientSuppressor : NSObject

@property (nonatomic) NSUInteger nextSuppressionRequestToken; // ivar: _nextSuppressionRequestToken
@property (retain, nonatomic) NPKAssertion *suppressionAssertion; // ivar: _suppressionAssertion
@property (retain) NSMutableIndexSet *suppressionRequestTokens; // ivar: _suppressionRequestTokens
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *suppressorQueue; // ivar: _suppressorQueue


+(BOOL)isSuppressingDoubleClickClients;
+(NSUInteger)requestDoubleClickClientSuppressionWithResponseHandler:(id)arg0 ;
+(id)sharedInstance;
+(void)endDoubleClickClientSuppressionWithRequestToken:(NSUInteger)arg0 ;
-(BOOL)isSuppressingDoubleClickClients;
-(NSUInteger)requestDoubleClickClientSuppressionWithResponseHandler:(id)arg0 ;
-(id)init;
-(void)_acquireSuppressionAssertionIfNeededWithCompletion:(id)arg0 ;
-(void)_acquireSuppressionAssertionWithCompletion:(id)arg0 ;
-(void)_postSuppressionStateChanged;
-(void)dealloc;
-(void)endDoubleClickClientSuppressionWithRequestToken:(NSUInteger)arg0 ;


@end


#endif