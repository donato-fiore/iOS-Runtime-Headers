// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKBUNDLE_H
#define PKBUNDLE_H

@class NSString, NSDictionary, NSURL;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface PKBundle : NSObject

@property (retain) NSObject<OS_xpc_object> *_bundle; // ivar: __bundle
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *executablePath;
@property (readonly) NSDictionary *infoDictionary;
@property (readonly) NSString *path;
@property (readonly) NSString *plugInsPath;
@property (readonly) NSString *supportPath; // ivar: _supportPath
@property (readonly) NSURL *url;


-(id)bundleDirectory:(id)arg0 ;
-(id)initForMainBundle;
-(id)initWithExecutablePath:(id)arg0 ;
-(id)initWithExecutableURL:(id)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithXPCBundle:(id)arg0 ;
-(id)stringProperty:(int)arg0 ;


@end


#endif