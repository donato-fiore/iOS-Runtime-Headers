// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCARRAYSTREAM_H
#define FCARRAYSTREAM_H

@class NSArray, NSString;
@protocol FCStreaming;

#import <Foundation/Foundation.h>


@interface FCArrayStream : NSObject <FCStreaming>

 {
    NSArray *_array;
    NSUInteger _index;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)fetchMoreResultsWithLimit:(NSUInteger)arg0 qualityOfService:(NSInteger)arg1 callbackQueue:(id)arg2 completionHandler:(id)arg3 ;
-(id)init;
-(id)initWithArray:(id)arg0 ;


@end


#endif