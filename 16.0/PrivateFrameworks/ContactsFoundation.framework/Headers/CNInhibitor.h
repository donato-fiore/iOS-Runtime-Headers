// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNINHIBITOR_H
#define CNINHIBITOR_H

@class NSString;
@protocol CNInhibitor;

#import <Foundation/Foundation.h>


@interface CNInhibitor : NSObject <CNInhibitor>



@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL debugIsInhibiting; // ivar: _debugIsInhibiting
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)os_transactionInhibitorWithLabel:(id)arg0 ;
+(id)runningboardInhibitorWithExplanation:(id)arg0 ;
+(id)suddenTerminationInhibitor;
+(id)suddenTerminationInhibitorWithProcessInfo:(id)arg0 ;
-(void)dealloc;
-(void)start;
-(void)stop;


@end


#endif