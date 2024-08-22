// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AALOGGINGEVENTPROCESSOR_H
#define AALOGGINGEVENTPROCESSOR_H

@protocol AAEventProcessorType;

#import <Foundation/Foundation.h>


@interface AALoggingEventProcessor : NSObject <AAEventProcessorType>

 {
    ? proxyEventProcessor;
}




-(id)init;
-(id)initWithFormat:(NSInteger)arg0 ;
-(id)initWithFormat:(NSInteger)arg0 subsystem:(id)arg1 ;
-(void)processEvent:(id)arg0 ;


@end


#endif