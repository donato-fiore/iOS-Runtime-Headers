// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIOVERSIONINFO_H
#define MIOVERSIONINFO_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MIOVersionInfo : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger majorVersion; // ivar: _majorVersion
@property (readonly, nonatomic) NSInteger minorVersion; // ivar: _minorVersion
@property (readonly, nonatomic) NSInteger patchVersion; // ivar: _patchVersion
@property (readonly, nonatomic) NSString *versionNumberString;


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithMajor:(NSInteger)arg0 minor:(NSInteger)arg1 patch:(NSInteger)arg2 ;


@end


#endif