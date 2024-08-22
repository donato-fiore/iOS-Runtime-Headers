// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIATTRIBUTEDSTRINGLAYOUT_H
#define SKUIATTRIBUTEDSTRINGLAYOUT_H

@class NSAttributedString, NSString, NSShadow, NSStringDrawingContext;
@protocol SKUICachedLayout;

#import <Foundation/Foundation.h>


@interface SKUIAttributedStringLayout : NSObject <SKUICachedLayout>



@property (readonly, nonatomic) NSAttributedString *attributedString; // ivar: _attributedString
@property (readonly, nonatomic) CGFloat baselineOffset;
@property (readonly, nonatomic) CGSize boundingSize; // ivar: _boundingSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIEdgeInsets edgeInsetsForShadow; // ivar: _edgeInsetsForShadow
@property (readonly, nonatomic) CGFloat firstBaselineOffset;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger numberOfLines;
@property (readonly, nonatomic) NSShadow *shadow; // ivar: _shadow
@property (readonly, nonatomic) NSStringDrawingContext *stringDrawingContext; // ivar: _context
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat topInset; // ivar: _topInset
@property (readonly, nonatomic) BOOL usesTallCharacterSet; // ivar: _usesTallCharacterSet


-(id)initWithLayoutRequest:(id)arg0 ;


@end


#endif