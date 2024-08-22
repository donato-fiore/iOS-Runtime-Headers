// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSURL_H
#define NSURL_H

@class NSString, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "NSURL.h"
#import "NSData.h"

@interface NSURL : NSObject <NSSecureCoding, NSCopying>

 {
    NSString *_urlString;
    NSURL *_baseURL;
    *void _clients;
    *void _reserved;
}


@property (readonly, copy) NSString *absoluteString;
@property (readonly, copy) NSURL *absoluteURL;
@property (readonly, copy) NSURL *baseURL;
@property (readonly, copy) NSData *dataRepresentation;
@property (readonly, copy) NSURL *filePathURL;
@property (readonly) char * fileSystemRepresentation;
@property (readonly, getter=isFileURL) BOOL fileURL;
@property (readonly, copy) NSString *fragment;
@property (readonly) BOOL hasDirectoryPath;
@property (readonly, copy) NSString *host;
@property (readonly, copy) NSString *parameterString;
@property (readonly, copy) NSString *password;
@property (readonly, copy) NSString *path;
@property (readonly, copy) NSNumber *port;
@property (readonly, copy) NSString *query;
@property (readonly, copy) NSString *relativePath;
@property (readonly, copy) NSString *relativeString;
@property (readonly, copy) NSString *resourceSpecifier;
@property (readonly, copy) NSString *scheme;
@property (readonly, copy) NSURL *standardizedURL;
@property (readonly, copy) NSString *user;


+(BOOL)writeBookmarkData:(id)arg0 toURL:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
+(id)__unurl;
+(id)bookmarkDataWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
+(id)resourceValuesForKeys:(id)arg0 fromBookmarkData:(id)arg1 ;
-(BOOL)checkResourceIsReachableAndReturnError:(*id)arg0 ;
-(BOOL)getResourceValue:(*id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)isFileReferenceURL;
-(BOOL)setResourceValue:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)setResourceValues:(id)arg0 error:(*id)arg1 ;
-(BOOL)startAccessingSecurityScopedResource;
-(id)bookmarkDataWithOptions:(NSUInteger)arg0 includingResourceValuesForKeys:(id)arg1 relativeToURL:(id)arg2 error:(*id)arg3 ;
-(id)fileReferenceURL;
-(id)resourceValuesForKeys:(id)arg0 error:(*id)arg1 ;
-(void)removeAllCachedResourceValues;
-(void)removeCachedResourceValueForKey:(id)arg0 ;
-(void)setTemporaryResourceValue:(id)arg0 forKey:(id)arg1 ;
-(void)stopAccessingSecurityScopedResource;


@end


#endif