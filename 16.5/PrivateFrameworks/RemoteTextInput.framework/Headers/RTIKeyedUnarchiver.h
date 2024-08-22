// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTIKEYEDUNARCHIVER_H
#define RTIKEYEDUNARCHIVER_H

@class NSKeyedUnarchiver, NSString;
@protocol RTICoding;



@interface RTIKeyedUnarchiver : NSKeyedUnarchiver <RTICoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger rtiVersion; // ivar: rtiVersion
@property (readonly) Class superclass;




@end


#endif