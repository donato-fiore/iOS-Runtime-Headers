// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCSPARSEDLINE_H
#define VCSPARSEDLINE_H

@class NSString, NSMutableData, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VCSParsedLine : NSObject {
    NSString *_keyword;
    NSMutableData *_content;
    NSMutableDictionary *_params;
}


@property (nonatomic) NSInteger tokenID; // ivar: _tokenID
@property (nonatomic) NSUInteger type; // ivar: _type
@property (nonatomic) BOOL usePalmD4Hooks; // ivar: _usePalmD4Hooks


+(NSInteger)tokenizeKeyword:(char *)arg0 withType:(*NSUInteger)arg1 ;
+(NSInteger)tokenizeNSStringKeyword:(id)arg0 withType:(*NSUInteger)arg1 ;
+(struct ? *)lookupProperty:(NSInteger)arg0 ;
-(id)content;
-(id)convertedContent;
-(id)description;
-(id)init;
-(id)keyword;
-(id)loadFromCString:(char *)arg0 withParseState:(id)arg1 ;
-(id)params;
-(void)reset;
-(void)setContentFromCString:(char *)arg0 ;
-(void)setKeywordFromCString:(char *)arg0 ;


@end


#endif