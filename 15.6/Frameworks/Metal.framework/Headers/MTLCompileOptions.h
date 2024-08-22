// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLCOMPILEOPTIONS_H
#define MTLCOMPILEOPTIONS_H

@class NSString, NSArray, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTLCompileOptions : NSObject <NSCopying>



@property (copy, nonatomic) NSString *additionalCompilerArguments;
@property (nonatomic) BOOL compileTimeStatisticsEnabled;
@property (nonatomic) BOOL debuggingEnabled;
@property (nonatomic) BOOL fastMathEnabled;
@property (nonatomic) BOOL glBufferBindPoints;
@property (copy, nonatomic) NSString *installName;
@property (nonatomic) NSUInteger languageVersion;
@property (copy, nonatomic) NSArray *libraries;
@property (nonatomic) NSInteger libraryType;
@property (copy, nonatomic) NSDictionary *preprocessorMacros;
@property (nonatomic) BOOL preserveInvariance;
@property (nonatomic) unsigned char sourceLanguage;
@property (nonatomic) BOOL tracingEnabled;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif