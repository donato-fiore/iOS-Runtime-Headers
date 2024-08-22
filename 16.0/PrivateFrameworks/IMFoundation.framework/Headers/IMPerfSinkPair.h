// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMPERFSINKPAIR_H
#define IMPERFSINKPAIR_H

@protocol IMPerfProfilerBehavior, IMPerfProfilerSink;

#import <Foundation/Foundation.h>


@interface IMPerfSinkPair : NSObject

@property (readonly, nonatomic) NSObject<IMPerfProfilerBehavior> *behavior; // ivar: _behavior
@property (readonly, nonatomic) NSObject<IMPerfProfilerSink> *sink; // ivar: _sink


-(id)initWithBehavior:(id)arg0 sink:(id)arg1 ;


@end


#endif