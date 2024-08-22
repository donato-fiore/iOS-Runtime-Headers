// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WKWEBEXTENSIONMATCHPATTERN_H
#define _WKWEBEXTENSIONMATCHPATTERN_H

@class NSString;
@protocol WKObject, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _WKWebExtensionMatchPattern : NSObject <WKObject, NSSecureCoding, NSCopying>

 {
    ObjectStorage<WebKit::WebExtensionMatchPattern> _webExtensionMatchPattern;
}


@property (readonly) *Object _apiObject;
@property (readonly, nonatomic) *void _webExtensionMatchPattern;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, nonatomic) BOOL matchesAllHosts;
@property (readonly, nonatomic) BOOL matchesAllURLs;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, copy, nonatomic) NSString *scheme;
@property (readonly, copy, nonatomic) NSString *string;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)allHostsAndSchemesMatchPattern;
+(id)allURLsMatchPattern;
+(id)matchPatternWithScheme:(id)arg0 host:(id)arg1 path:(id)arg2 ;
+(id)matchPatternWithString:(id)arg0 ;
+(void)registerCustomURLScheme:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesPattern:(id)arg0 ;
-(BOOL)matchesPattern:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)matchesURL:(id)arg0 ;
-(BOOL)matchesURL:(id)arg0 options:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScheme:(id)arg0 host:(id)arg1 path:(id)arg2 error:(*id)arg3 ;
-(id)initWithString:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif