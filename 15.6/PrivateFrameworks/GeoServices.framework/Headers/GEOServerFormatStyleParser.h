// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOSERVERFORMATSTYLEPARSER_H
#define GEOSERVERFORMATSTYLEPARSER_H

@class NSString, NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface GEOServerFormatStyleParser : NSObject {
    NSString *_string;
    NSMutableArray *_styleNames;
    NSMutableArray *_styleRanges;
    NSMutableArray *_tokenRanges;
    NSArray *_results;
    NSMutableArray *_openStyleNames;
    NSMutableArray *_openStyleLocations;
    BOOL _parsed;
}


@property (readonly, nonatomic) NSArray *styles;
@property (readonly, nonatomic) NSArray *tokenRanges;


-(BOOL)_handleClosingResult:(id)arg0 ;
-(BOOL)_handleOpeningResult:(id)arg0 ;
-(id)attributedStringWithStyleAttributes:(id)arg0 defaultAttributes:(id)arg1 ;
-(id)init;
-(id)initWithString:(id)arg0 ;
-(struct _NSRange )rangeForStyleAtIndex:(NSUInteger)arg0 ;
-(void)_parse;
-(void)_parseIfNeeded;
-(void)_removeTokensFromAttributedString:(id)arg0 ;
-(void)enumerateStylesWithBlock:(id)arg0 ;
-(void)enumerateTokenRangesForRemoval:(id)arg0 ;


@end


#endif