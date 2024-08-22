// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARNONSYNCHRONOUSDATA_H
#define ARNONSYNCHRONOUSDATA_H

@class NSString, NSArray;
@protocol ARResultData;

#import <Foundation/Foundation.h>


@interface ARNonSynchronousData : NSObject <ARResultData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSArray *gatheredData; // ivar: _gatheredData
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)initWithGatheredData:(id)arg0 timestamp:(CGFloat)arg1 ;
-(id)resultDataOfClass:(Class)arg0 ;


@end


#endif