// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIKEYEDARCHIVER_H
#define TIKEYEDARCHIVER_H

@class NSKeyedArchiver, NSString;
@protocol TICoding;



@interface TIKeyedArchiver : NSKeyedArchiver <TICoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger tiVersion; // ivar: tiVersion




@end


#endif