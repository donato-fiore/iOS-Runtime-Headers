// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKTABLECELL_H
#define MKTABLECELL_H

@class NSFormatter;

#import <Foundation/Foundation.h>


@interface MKTableCell : NSObject

@property (nonatomic) NSInteger alignment; // ivar: _alignment
@property (nonatomic) int columnSpan; // ivar: _columnSpan
@property (retain, nonatomic) NSFormatter *formatter; // ivar: _formatter
@property (retain, nonatomic) NSObject *value; // ivar: _value


+(id)cellWithValue:(id)arg0 formatter:(id)arg1 ;
+(id)cellWithValue:(id)arg0 formatter:(id)arg1 alignment:(NSInteger)arg2 ;
+(id)cellWithValue:(id)arg0 formatter:(id)arg1 columnSpan:(int)arg2 ;
+(id)cellWithValue:(id)arg0 formatter:(id)arg1 columnSpan:(int)arg2 alignment:(NSInteger)arg3 ;
-(id)formattedValue;


@end


#endif