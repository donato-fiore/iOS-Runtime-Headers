// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSWEBEXTENSIONMATCHPATTERN_H
#define WBSWEBEXTENSIONMATCHPATTERN_H

@class NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface WBSWebExtensionMatchPattern : NSObject <NSSecureCoding, NSCopying>

 {
    NSString *_description;
}


@property (readonly, nonatomic) NSArray *expandedMatchPatternStrings;
@property (readonly, nonatomic) NSString *host; // ivar: _host
@property (readonly, nonatomic) BOOL matchesAllHosts;
@property (readonly, nonatomic) BOOL matchesAllURLs; // ivar: _matchesAllURLs
@property (readonly, nonatomic) NSString *path; // ivar: _path
@property (readonly, nonatomic) NSString *scheme; // ivar: _scheme


+(BOOL)patternSetContainsAllHostsPattern:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)allHostsAndSchemesMatchPattern;
+(id)allHostsAndSchemesMatchPatternSet;
+(id)matchPatternForDomain:(id)arg0 ;
+(id)matchPatternWithString:(id)arg0 ;
-(BOOL)_hostMatches:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)_parse:(id)arg0 exception:(*id)arg1 ;
-(BOOL)_pathMatches:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)_schemeCanBeParsed:(id)arg0 ;
-(BOOL)_schemeMatches:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesPattern:(id)arg0 ;
-(BOOL)matchesPattern:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)matchesURL:(id)arg0 ;
-(BOOL)matchesURL:(id)arg0 options:(NSUInteger)arg1 ;
-(NSUInteger)hash;
-(id)_descriptionWithScheme:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScheme:(id)arg0 host:(id)arg1 path:(id)arg2 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithString:(id)arg0 exception:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif