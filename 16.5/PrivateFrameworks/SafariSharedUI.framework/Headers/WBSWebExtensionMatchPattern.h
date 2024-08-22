// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSWEBEXTENSIONMATCHPATTERN_H
#define WBSWEBEXTENSIONMATCHPATTERN_H

@class NSArray, NSString, _WKWebExtensionMatchPattern;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface WBSWebExtensionMatchPattern : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSArray *expandedMatchPatternStrings;
@property (readonly, nonatomic) NSString *host;
@property (readonly, nonatomic) BOOL matchesAllHosts;
@property (readonly, nonatomic) BOOL matchesAllURLs;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *scheme;
@property (readonly, nonatomic) _WKWebExtensionMatchPattern *webKitMatchPattern; // ivar: _webKitMatchPattern


+(BOOL)patternSetContainsAllHostsPattern:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)allHostsAndSchemesMatchPattern;
+(id)allHostsAndSchemesMatchPatternSet;
+(id)matchPatternForDomain:(id)arg0 ;
+(id)matchPatternWithString:(id)arg0 ;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesPattern:(id)arg0 ;
-(BOOL)matchesPattern:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)matchesURL:(id)arg0 ;
-(BOOL)matchesURL:(id)arg0 options:(NSUInteger)arg1 ;
-(NSUInteger)hash;
-(id)_descriptionWithScheme:(id)arg0 ;
-(id)_initWithWebKitMatchPattern:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScheme:(id)arg0 host:(id)arg1 path:(id)arg2 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithString:(id)arg0 exception:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif