// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PIPHOTOEDITADJUSTMENTSVERSION_H
#define PIPHOTOEDITADJUSTMENTSVERSION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PIPhotoEditAdjustmentsVersion : NSObject

@property (readonly, nonatomic) NSUInteger majorVersion; // ivar: _majorVersion
@property (readonly, nonatomic) NSUInteger minorVersion; // ivar: _minorVersion
@property (readonly, copy, nonatomic) NSString *platform; // ivar: _platform
@property (readonly, weak, nonatomic) NSString *string;
@property (readonly, nonatomic) NSUInteger subMinorVersion; // ivar: _subMinorVersion


+(id)versionFromString:(id)arg0 ;
+(id)versionWithMajor:(NSUInteger)arg0 minor:(NSUInteger)arg1 subMinor:(NSUInteger)arg2 platform:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAdjustmentVersion:(id)arg0 ;
-(NSInteger)asOrderedInteger;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithMajor:(NSUInteger)arg0 minor:(NSUInteger)arg1 subMinor:(NSUInteger)arg2 ;
-(id)initWithMajor:(NSUInteger)arg0 minor:(NSUInteger)arg1 subMinor:(NSUInteger)arg2 platform:(id)arg3 ;


@end


#endif