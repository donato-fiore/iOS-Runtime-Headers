// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTLOCALSTYLESKEY_H
#define TSTLOCALSTYLESKEY_H

@class TSWPParagraphStyle;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSTCellStyle.h"

@interface TSTLocalStylesKey : NSObject <NSCopying>



@property (retain, nonatomic) TSTCellStyle *cellStyle; // ivar: _cellStyle
@property (retain, nonatomic) TSWPParagraphStyle *textStyle; // ivar: _textStyle


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif