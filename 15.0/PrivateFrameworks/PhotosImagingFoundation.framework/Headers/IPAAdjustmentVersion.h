// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IPAADJUSTMENTVERSION_H
#define IPAADJUSTMENTVERSION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IPAAdjustmentVersion : NSObject

@property (readonly, nonatomic) NSUInteger majorVersion; // ivar: _majorVersion
@property (readonly, nonatomic) NSUInteger minorVersion; // ivar: _minorVersion
@property (readonly, nonatomic) NSString *platform; // ivar: _platform


+(id)validatePlatformString:(id)arg0 ;
+(id)versionForMajor:(NSUInteger)arg0 minor:(NSUInteger)arg1 ;
+(id)versionForMajor:(NSUInteger)arg0 minor:(NSUInteger)arg1 platform:(id)arg2 ;
+(id)versionFromArchivalRepresentation:(id)arg0 ;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAdjustmentVersion:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)archivalRepresentation;
-(id)debugDescription;
-(id)description;
-(id)initWithMajor:(NSUInteger)arg0 minor:(NSUInteger)arg1 platform:(id)arg2 ;


@end


#endif