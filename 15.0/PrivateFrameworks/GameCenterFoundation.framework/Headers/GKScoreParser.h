// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKSCOREPARSER_H
#define GKSCOREPARSER_H

@class NSMutableArray, NSMutableString;

#import <Foundation/Foundation.h>


@interface GKScoreParser : NSObject

@property (nonatomic) NSInteger colonCount; // ivar: _colonCount
@property (nonatomic) BOOL error; // ivar: _error
@property (retain, nonatomic) NSMutableArray *numericSeparators; // ivar: _numericSeparators
@property (nonatomic) NSInteger precision; // ivar: _precision
@property (retain, nonatomic) NSMutableString *prefix; // ivar: _prefix
@property (retain, nonatomic) NSMutableString *suffix; // ivar: _suffix


+(id)formattedDifferenceBetweenFirstScore:(id)arg0 secondScore:(id)arg1 ;
-(void)parseScore:(id)arg0 ;


@end


#endif