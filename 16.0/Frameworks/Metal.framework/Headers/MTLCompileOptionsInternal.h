// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLCOMPILEOPTIONSINTERNAL_H
#define MTLCOMPILEOPTIONSINTERNAL_H

@class NSDictionary, NSString, NSArray;


#import "MTLCompileOptions.h"

@interface MTLCompileOptionsInternal : MTLCompileOptions {
    BOOL _userSetLanguageVersion;
    NSDictionary *_preprocessorMacros;
    BOOL _fastMathEnabled;
    BOOL _glBufferBindPoints;
    BOOL _tracingEnabled;
    BOOL _debuggingEnabled;
    NSUInteger _languageVersion;
    BOOL _compileTimeStatisticsEnabled;
    NSString *_additionalCompilerArguments;
    unsigned char _sourceLanguage;
    NSInteger _libraryType;
    NSArray *_libraries;
    NSString *_installName;
    BOOL _preserveInvariance;
    NSInteger _optimizationLevel;
}




-(BOOL)compileTimeStatisticsEnabled;
-(BOOL)debuggingEnabled;
-(BOOL)fastMathEnabled;
-(BOOL)glBufferBindPoints;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)preserveInvariance;
-(BOOL)tracingEnabled;
-(NSInteger)libraryType;
-(NSInteger)optimizationLevel;
-(NSUInteger)hash;
-(NSUInteger)languageVersion;
-(id)additionalCompilerArguments;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)exportDictionary;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)init;
-(id)installName;
-(id)libraries;
-(id)preprocessorMacros;
-(unsigned char)sourceLanguage;
-(void)dealloc;
-(void)importDictionary:(id)arg0 ;
-(void)setAdditionalCompilerArguments:(id)arg0 ;
-(void)setCompileTimeStatisticsEnabled:(BOOL)arg0 ;
-(void)setDebuggingEnabled:(BOOL)arg0 ;
-(void)setFastMathEnabled:(BOOL)arg0 ;
-(void)setGlBufferBindPoints:(BOOL)arg0 ;
-(void)setInstallName:(id)arg0 ;
-(void)setLanguageVersion:(NSUInteger)arg0 ;
-(void)setLibraries:(id)arg0 ;
-(void)setLibraryType:(NSInteger)arg0 ;
-(void)setOptimizationLevel:(NSInteger)arg0 ;
-(void)setPreprocessorMacros:(id)arg0 ;
-(void)setPreserveInvariance:(BOOL)arg0 ;
-(void)setSourceLanguage:(unsigned char)arg0 ;
-(void)setTracingEnabled:(BOOL)arg0 ;


@end


#endif