// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDDEMODATABASESAMPLEGENERATOR_H
#define HDDEMODATABASESAMPLEGENERATOR_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HDDemoDataGenerator.h"

@interface HDDemoDataBaseSampleGenerator : NSObject <NSSecureCoding>

 {
    BOOL _createdFromNSKeyedUnarchiver;
}


@property (weak, nonatomic) HDDemoDataGenerator *demoDataGenerator; // ivar: _demoDataGenerator


+(BOOL)supportsSecureCoding;
-(BOOL)_createdFromNSKeyedUnarchiver;
-(BOOL)createdFromNSKeyedUnarchiver;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)generateFirstRunSampleForDemoPerson:(id)arg0 firstDate:(id)arg1 objectCollection:(id)arg2 ;
-(void)generateSamplesForDemoPerson:(id)arg0 fromTime:(CGFloat)arg1 toTime:(CGFloat)arg2 currentDate:(id)arg3 objectCollection:(id)arg4 ;
-(void)setupWithDemoDataGenerator:(id)arg0 ;


@end


#endif