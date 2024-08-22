// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUVERSION_H
#define NUVERSION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NUVersion : NSObject

@property (readonly) NSInteger major; // ivar: _major
@property (readonly) NSInteger minor; // ivar: _minor
@property (readonly) NSString *stringRepresentation;


+(BOOL)isValidVersionString:(id)arg0 error:(*id)arg1 ;
+(BOOL)isValidVersionString:(id)arg0 error:(*id)arg1 major:(*id)arg2 minor:(*id)arg3 ;
+(id)regularExpression;
+(id)versionOne;
+(id)versionWithString:(id)arg0 error:(*id)arg1 ;
+(id)versionZero;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToVersion:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithMajor:(NSInteger)arg0 minor:(NSInteger)arg1 ;


@end


#endif