// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMCONFIGURATIONSUBSCRIBERXPCLISTENERDELEGATE_H
#define RMCONFIGURATIONSUBSCRIBERXPCLISTENERDELEGATE_H

@class NSArray, NSString;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface RMConfigurationSubscriberXPCListenerDelegate : NSObject <NSXPCListenerDelegate>



@property (readonly, copy, nonatomic) NSArray *applicatorClasses; // ivar: _applicatorClasses
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) Class publisherClass; // ivar: _publisherClass
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithApplicators:(id)arg0 publisherClass:(Class)arg1 ;


@end


#endif