// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIINTERFACEACTIONSEPARATORATTRIBUTES_H
#define UIINTERFACEACTIONSEPARATORATTRIBUTES_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface UIInterfaceActionSeparatorAttributes : NSObject <NSCopying>



@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) NSArray *filters; // ivar: _filters
@property (nonatomic) CGFloat opacity; // ivar: _opacity


-(BOOL)_hasNonClearBackgroundColor;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)newSeparatorView;


@end


#endif