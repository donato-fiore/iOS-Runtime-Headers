// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EXFRAMEWORKSCANNER_H
#define EXFRAMEWORKSCANNER_H

@class NSOperation, NSMutableArray, NSMutableDictionary, NSArray, NSDictionary, NSURL;



@interface EXFrameworkScanner : NSOperation

@property (retain) NSMutableArray *_appleInternalExtensions; // ivar: __appleInternalExtensions
@property (retain) NSMutableDictionary *_combinedAppleInternalExtensionSDK; // ivar: __combinedAppleInternalExtensionSDK
@property (retain) NSMutableDictionary *_combinedExtensionSDK; // ivar: __combinedExtensionSDK
@property (retain) NSMutableArray *_extensions; // ivar: __extensions
@property (readonly) NSArray *appleInternalExtensionPaths;
@property (readonly) NSDictionary *combinedAppleInternalExtensionSDK;
@property (readonly) NSDictionary *combinedExtensionSDK;
@property (readonly) NSArray *extensionPaths;
@property (readonly) NSURL *sourceURL; // ivar: _sourceURL


+(id)frameworkPaths;
+(id)rootURL;
-(BOOL)isAppleInternalURL:(id)arg0 ;
-(BOOL)isCatalystSupportURL:(id)arg0 ;
-(id)initWithSourceURL:(id)arg0 ;
-(void)enumerateAppexptAtURL:(id)arg0 block:(id)arg1 ;
-(void)enumerateBundlesWithPathExtension:(id)arg0 atURL:(id)arg1 block:(id)arg2 ;
-(void)enumerateFrameworksBundlesWithFrameworkURL:(id)arg0 block:(id)arg1 ;
-(void)main;
-(void)processExtensionSDK:(id)arg0 declaringURL:(id)arg1 ;
-(void)processExtensionSDKFromBundle:(struct __CFBundle *)arg0 ;
-(void)processExtensionSDKFromFile:(id)arg0 ;
-(void)processExtensionsFromBundle:(struct __CFBundle *)arg0 ;
-(void)processExtensionsInDirectory:(id)arg0 ;


@end


#endif