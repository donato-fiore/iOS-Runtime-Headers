// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AECONCRETEPERFORMANCEPRIMITIVES_H
#define AECONCRETEPERFORMANCEPRIMITIVES_H

@class NSString;
@protocol AEPerformancePrimitives;

#import <Foundation/Foundation.h>


@interface AEConcretePerformancePrimitives : NSObject <AEPerformancePrimitives>

 {
    NSString *_subsystem;
}




-(id)beginIntervalWithCategory:(id)arg0 name:(id)arg1 ;


@end


#endif