// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUCOREEVENTREPORTERDELEGATE_H
#define SUCOREEVENTREPORTERDELEGATE_H

@class NSString;
@protocol NSURLSessionDelegate;

#import <Foundation/Foundation.h>

#import "SUCoreEventReporter.h"

@interface SUCoreEventReporterDelegate : NSObject <NSURLSessionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) SUCoreEventReporter *reporter; // ivar: _reporter
@property (readonly) Class superclass;


-(id)initWithReporter:(id)arg0 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;


@end


#endif