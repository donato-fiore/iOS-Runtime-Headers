// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHTOKENIZEDURL_H
#define SHTOKENIZEDURL_H

@class NSString, NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SHTokenizedURL : NSObject <NSCopying>



@property (copy, nonatomic) NSString *host; // ivar: _host
@property (copy, nonatomic) NSString *originalURLPath; // ivar: _originalURLPath
@property (retain, nonatomic) NSMutableDictionary *tokenDictionary; // ivar: _tokenDictionary
@property (readonly, copy, nonatomic) NSString *tokenURLPath;


-(BOOL)containsTokens;
-(BOOL)updateToken:(NSInteger)arg0 withValue:(id)arg1 ;
-(id)URLRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithHost:(id)arg0 URLPath:(id)arg1 ;
-(id)initWithString:(id)arg0 ;
-(id)tokenForTokenType:(NSInteger)arg0 ;


@end


#endif