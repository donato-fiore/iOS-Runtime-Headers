// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPILLCONTENTITEM_H
#define PLPILLCONTENTITEM_H

@class UIView, NSAttributedString, NSString;

#import <Foundation/Foundation.h>

#import "PLPillContentWrapperView.h"

@interface PLPillContentItem : NSObject {
    BOOL _solo;
    PLPillContentWrapperView *_wrapperView;
    id *_text;
}


@property (readonly, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (readonly, nonatomic) NSAttributedString *attributedText;
@property (readonly, copy, nonatomic, getter=_identifier) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic, getter=isSolo) BOOL solo;
@property (readonly, nonatomic) NSUInteger style; // ivar: _style
@property (readonly, nonatomic) NSString *text;
@property (weak, nonatomic) PLPillContentWrapperView *wrapperView;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLikePillContentItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithIdentifier:(id)arg0 text:(id)arg1 style:(NSUInteger)arg2 accessoryView:(id)arg3 solo:(BOOL)arg4 ;
-(id)debugDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithAccessoryView:(id)arg0 ;
-(id)initWithAttributedText:(id)arg0 ;
-(id)initWithAttributedText:(id)arg0 style:(NSUInteger)arg1 ;
-(id)initWithAttributedText:(id)arg0 style:(NSUInteger)arg1 accessoryView:(id)arg2 ;
-(id)initWithText:(id)arg0 ;
-(id)initWithText:(id)arg0 style:(NSUInteger)arg1 ;
-(id)initWithText:(id)arg0 style:(NSUInteger)arg1 accessoryView:(id)arg2 ;
-(id)itemWithAttributedText:(id)arg0 ;
-(id)itemWithAttributedText:(id)arg0 style:(NSUInteger)arg1 ;
-(id)itemWithAttributedText:(id)arg0 style:(NSUInteger)arg1 accessoryView:(id)arg2 ;
-(id)itemWithStyle:(NSUInteger)arg0 ;
-(id)itemWithText:(id)arg0 ;
-(id)itemWithText:(id)arg0 style:(NSUInteger)arg1 ;
-(id)itemWithText:(id)arg0 style:(NSUInteger)arg1 accessoryView:(id)arg2 ;
-(id)soloItem;
-(void)updateWithContentItem:(id)arg0 ;


@end


#endif