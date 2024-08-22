// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMTTPARAGRAPHSTYLE_H
#define REMTTPARAGRAPHSTYLE_H


#import <Foundation/Foundation.h>

#import "TTParagraphStyle.h"

@interface REMTTParagraphStyle : NSObject

@property (readonly, nonatomic) NSObject *attributedValue;
@property (retain, nonatomic) TTParagraphStyle *innerStyle; // ivar: _innerStyle
@property (readonly, nonatomic) NSInteger remParagraphStyle;


-(id)initWithContents:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)listBulletInAttributedString:(id)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif