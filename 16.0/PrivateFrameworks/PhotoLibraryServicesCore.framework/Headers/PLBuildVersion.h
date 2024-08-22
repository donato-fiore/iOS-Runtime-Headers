// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBUILDVERSION_H
#define PLBUILDVERSION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PLBuildVersion : NSObject

@property (readonly, copy, nonatomic) NSString *majorBuildLetterString; // ivar: _majorBuildLetterString
@property (readonly, nonatomic) NSInteger majorBuildNumber; // ivar: _majorBuildNumber
@property (readonly, copy, nonatomic) NSString *minorBuildLetterString; // ivar: _minorBuildLetterString
@property (readonly, nonatomic) NSInteger minorBuildNumber; // ivar: _minorBuildNumber
@property (readonly, copy, nonatomic) NSString *stringRepresentation; // ivar: _stringRepresentation


+(id)currentBuildVersionString;
-(NSInteger)compareBuildVersion:(id)arg0 withPrecision:(NSInteger)arg1 ;
-(NSInteger)compareBuildVersionString:(id)arg0 withPrecision:(NSInteger)arg1 ;
-(id)description;
-(id)initWithString:(id)arg0 ;


@end


#endif