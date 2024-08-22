// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIKEYEDUNARCHIVER_H
#define TIKEYEDUNARCHIVER_H

@class NSKeyedUnarchiver, NSString;
@protocol TICoding;



@interface TIKeyedUnarchiver : NSKeyedUnarchiver <TICoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger tiVersion; // ivar: tiVersion




@end


#endif