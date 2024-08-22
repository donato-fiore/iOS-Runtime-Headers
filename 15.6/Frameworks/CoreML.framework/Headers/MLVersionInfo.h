// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLVERSIONINFO_H
#define MLVERSIONINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MLVersionInfo : NSObject

@property (readonly) NSInteger majorVersion; // ivar: _majorVersion
@property (readonly) NSInteger minorVersion; // ivar: _minorVersion
@property (readonly) NSInteger patchVersion; // ivar: _patchVersion
@property (readonly) NSString *variantString; // ivar: _variantString
@property (readonly, nonatomic) NSString *versionNumberString;
@property (readonly, nonatomic) NSString *versionString;


+(id)versionInfoWithMajor:(NSInteger)arg0 minor:(NSInteger)arg1 patch:(NSInteger)arg2 variant:(id)arg3 ;
+(id)versionInfoWithString:(id)arg0 ;
+(id)versionInfoWithStringProgressive:(id)arg0 ;
-(BOOL)olderThan:(id)arg0 ;
-(id)initWithMajor:(NSInteger)arg0 minor:(NSInteger)arg1 patch:(NSInteger)arg2 variant:(id)arg3 ;


@end


#endif