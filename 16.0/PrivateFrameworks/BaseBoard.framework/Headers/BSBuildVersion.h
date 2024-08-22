// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSBUILDVERSION_H
#define BSBUILDVERSION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BSBuildVersion : NSObject

@property (readonly, copy, nonatomic) NSString *majorBuildLetterString; // ivar: _majorBuildLetterString
@property (readonly, nonatomic) NSInteger majorBuildNumber; // ivar: _majorBuildNumber
@property (readonly, copy, nonatomic) NSString *minorBuildLetterString; // ivar: _minorBuildLetterString
@property (readonly, nonatomic) NSInteger minorBuildNumber; // ivar: _minorBuildNumber
@property (readonly, copy, nonatomic) NSString *stringRepresentation; // ivar: _stringRepresentation


+(id)fromString:(id)arg0 ;
-(BOOL)isAfter:(id)arg0 ;
-(BOOL)isAfter:(id)arg0 withPrecision:(NSInteger)arg1 ;
-(BOOL)isBefore:(id)arg0 ;
-(BOOL)isBefore:(id)arg0 withPrecision:(NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSameAs:(id)arg0 ;
-(BOOL)isSameAs:(id)arg0 withPrecision:(NSInteger)arg1 ;
-(NSInteger)_compareAgainstBuildVersion:(id)arg0 withPrecision:(NSInteger)arg1 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithString:(id)arg0 ;


@end


#endif