// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIVERSION_H
#define TRIVERSION_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRIVersion : NSObject <NSCopying>



@property (readonly, nonatomic) NSNumber *majorVersion; // ivar: _majorVersion
@property (readonly, nonatomic) NSNumber *minorVersion; // ivar: _minorVersion
@property (readonly, nonatomic) NSNumber *patchVersion; // ivar: _patchVersion


+(id)parseVersionFromString:(id)arg0 withPrefix:(id)arg1 ;
+(id)versionWithMajorVersion:(id)arg0 minorVersion:(id)arg1 patchVersion:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToVersion:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementMajorVersion:(id)arg0 ;
-(id)copyWithReplacementMinorVersion:(id)arg0 ;
-(id)copyWithReplacementPatchVersion:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithMajorVersion:(id)arg0 minorVersion:(id)arg1 patchVersion:(id)arg2 ;


@end


#endif