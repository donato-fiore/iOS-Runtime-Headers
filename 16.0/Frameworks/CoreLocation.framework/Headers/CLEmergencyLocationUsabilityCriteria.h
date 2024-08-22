// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLEMERGENCYLOCATIONUSABILITYCRITERIA_H
#define CLEMERGENCYLOCATIONUSABILITYCRITERIA_H


#import <Foundation/Foundation.h>


@interface CLEmergencyLocationUsabilityCriteria : NSObject

@property (nonatomic) BOOL altitudeStitchingEnabled; // ivar: _altitudeStitchingEnabled
@property (nonatomic) CGFloat maxUsableAge; // ivar: _maxUsableAge
@property (nonatomic) CGFloat maxUsableHunc; // ivar: _maxUsableHunc
@property (nonatomic) CGFloat maxUsableVunc; // ivar: _maxUsableVunc
@property (nonatomic) unsigned int minUsableIntegrity; // ivar: _minUsableIntegrity
@property (nonatomic) BOOL vuncCheckRequiredForUsability; // ivar: _vuncCheckRequiredForUsability


-(id)init;
-(void)printUsabilityCriteria:(id)arg0 ;


@end


#endif