// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASHBOARDFOOTERTEXTITEM_H
#define PKDASHBOARDFOOTERTEXTITEM_H

@class NSString, UIColor;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>


@interface PKDashboardFooterTextItem : NSObject <PKDashboardItem>



@property (copy, nonatomic) id *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *footerText; // ivar: _footerText
@property (readonly) NSUInteger hash;
@property (nonatomic) _NSRange linkRange; // ivar: _linkRange
@property (retain, nonatomic) UIColor *linkTextColor; // ivar: _linkTextColor
@property (readonly) Class superclass;


+(id)identifier;
+(id)itemWithFooterText:(id)arg0 ;


@end


#endif