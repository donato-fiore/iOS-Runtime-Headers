// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDEMODATABASESAMPLEGENERATOR_H
#define HDDEMODATABASESAMPLEGENERATOR_H

@class NSString;
@protocol HDDemoDataObjectGenerator;

#import <Foundation/Foundation.h>

#import "HDDemoDataGenerator.h"
#import "HDProfile.h"

@interface HDDemoDataBaseSampleGenerator : NSObject <HDDemoDataObjectGenerator>

 {
    BOOL _createdFromNSKeyedUnarchiver;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) HDDemoDataGenerator *demoDataGenerator; // ivar: _demoDataGenerator
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)_createdFromNSKeyedUnarchiver;
-(BOOL)createdFromNSKeyedUnarchiver;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)generateFirstRunObjectsForDemoPerson:(id)arg0 firstDate:(id)arg1 objectCollection:(id)arg2 ;
-(void)generateObjectsForDemoPerson:(id)arg0 fromTime:(CGFloat)arg1 toTime:(CGFloat)arg2 currentDate:(id)arg3 objectCollection:(id)arg4 ;
-(void)setDemoDataGenerationContextWithProfile:(id)arg0 generatorState:(id)arg1 ;
-(void)setupWithDemoDataGenerator:(id)arg0 ;


@end


#endif