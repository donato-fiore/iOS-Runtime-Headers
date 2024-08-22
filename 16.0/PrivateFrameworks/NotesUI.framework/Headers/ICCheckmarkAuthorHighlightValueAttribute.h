// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICCHECKMARKAUTHORHIGHLIGHTVALUEATTRIBUTE_H
#define ICCHECKMARKAUTHORHIGHLIGHTVALUEATTRIBUTE_H

@class UIColor;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICCheckmarkAuthorHighlightValueAttribute : NSObject <NSCopying>



@property (nonatomic) CGFloat foregroundAlpha; // ivar: _foregroundAlpha
@property (copy, nonatomic) UIColor *highlightColor; // ivar: _highlightColor


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif