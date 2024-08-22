// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHCONFIGURATIONAGGREGATOR_H
#define CHCONFIGURATIONAGGREGATOR_H

@class NSArray, NSString;
@protocol CHConfigurationDelegate, CHConfigurationAggregatorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CHConfigurationAggregator : NSObject <CHConfigurationDelegate>



@property (readonly, nonatomic, getter=isCloudKitEnabled) BOOL cloudKitEnabled;
@property (readonly, copy, nonatomic) NSArray *configurations; // ivar: _configurations
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CHConfigurationAggregatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)initWithConfigurations:(id)arg0 queue:(id)arg1 ;
-(void)propertiesDidChangeForConfiguration:(id)arg0 ;
-(void)registerConfigurationDelegate;


@end


#endif