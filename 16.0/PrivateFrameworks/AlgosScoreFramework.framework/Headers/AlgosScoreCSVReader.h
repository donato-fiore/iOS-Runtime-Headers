// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ALGOSSCORECSVREADER_H
#define ALGOSSCORECSVREADER_H

@class NSError, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface AlgosScoreCSVReader : NSObject

@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSDictionary *headings; // ivar: _headings
@property (retain, nonatomic) NSArray *rows; // ivar: _rows


+(id)csvReader:(id)arg0 header:(BOOL)arg1 ;
-(CGFloat)doubleAtRow:(id)arg0 col:(id)arg1 defaultValue:(CGFloat)arg2 ;
-(CGFloat)doubleAtRow:(id)arg0 colIndex:(NSInteger)arg1 defaultValue:(CGFloat)arg2 ;
-(NSInteger)intAtRow:(id)arg0 col:(id)arg1 defaultValue:(NSInteger)arg2 ;
-(NSInteger)intAtRow:(id)arg0 colIndex:(NSInteger)arg1 defaultValue:(NSInteger)arg2 ;
-(id)atRow:(id)arg0 col:(id)arg1 ;
-(id)atRowIndex:(NSInteger)arg0 col:(id)arg1 ;
-(id)fixStrings:(id)arg0 ;
-(id)initWithFileName:(id)arg0 header:(BOOL)arg1 ;
-(id)parseFile:(id)arg0 header:(BOOL)arg1 ;
-(id)stripAndQuoteString:(id)arg0 ;
-(void)debugPrint:(int)arg0 ;
-(void)sortOnColumn:(id)arg0 ascending:(BOOL)arg1 ;
-(void)sortOnColumnIndex:(NSInteger)arg0 ascending:(BOOL)arg1 ;


@end


#endif