// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CERTUIITEMDETAIL_H
#define CERTUIITEMDETAIL_H

@class UIColor, NSString;

#import <Foundation/Foundation.h>


@interface CertUIItemDetail : NSObject

@property (retain, nonatomic) UIColor *checkmarkHighlightColor; // ivar: _checkmarkHighlightColor
@property (retain, nonatomic) NSString *checkmarkText; // ivar: _checkmarkText
@property (retain, nonatomic) NSString *detail; // ivar: _detail
@property (retain, nonatomic) UIColor *detailHighlightColor; // ivar: _detailHighlightColor
@property (retain, nonatomic) NSString *detailTitle; // ivar: _detailTitle
@property (nonatomic) BOOL showCheckmark; // ivar: _showCheckmark
@property (nonatomic) BOOL showCheckmarkView; // ivar: _showCheckmarkView


+(id)itemDetailWithDetailTitle:(id)arg0 detail:(id)arg1 ;
+(id)itemDetailWithDetailTitle:(id)arg0 detail:(id)arg1 detailHighlightColor:(id)arg2 ;
+(id)itemDetailWithDetailTitle:(id)arg0 detail:(id)arg1 detailHighlightColor:(id)arg2 showCheckmarkView:(BOOL)arg3 checkmarkText:(id)arg4 checkmarkHighlightColor:(id)arg5 showCheckmark:(BOOL)arg6 ;
-(id)initWithDetailTitle:(id)arg0 detail:(id)arg1 detailHighlightColor:(id)arg2 showCheckmarkView:(BOOL)arg3 checkmarkText:(id)arg4 checkmarkHighlightColor:(id)arg5 showCheckmark:(BOOL)arg6 ;


@end


#endif