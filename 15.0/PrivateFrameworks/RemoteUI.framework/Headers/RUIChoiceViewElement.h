// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RUICHOICEVIEWELEMENT_H
#define RUICHOICEVIEWELEMENT_H

@class NSMutableArray, UIImage, NSArray, NSString;
@protocol RUITopLevelPageElement;


#import "RUIElement.h"
#import "RUIChoiceView.h"
#import "RUIObjectModel.h"
#import "RUIPage.h"
#import "RUISubHeaderElement.h"

@interface RUIChoiceViewElement : RUIElement <RUITopLevelPageElement>

 {
    RUIChoiceView *_view;
    NSMutableArray *_choices;
    UIImage *_image;
}


@property (readonly, nonatomic) NSArray *choices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RUIElement *header; // ivar: _header
@property (retain, nonatomic) RUIElement *helpLinkElement; // ivar: _helpLinkElement
@property (weak, nonatomic) RUIObjectModel *objectModel; // ivar: _objectModel
@property (weak, nonatomic) RUIPage *page; // ivar: _page
@property (retain, nonatomic) RUISubHeaderElement *subHeader; // ivar: _subHeader
@property (readonly) Class superclass;


-(id)_bigChoiceColor;
-(id)_choiceColorWithAttribute:(id)arg0 atIndex:(int)arg1 ;
-(id)_smallChoiceColor;
-(id)initWithAttributes:(id)arg0 parent:(id)arg1 ;
-(id)sourceURL;
-(id)titleLabel;
-(id)view;
-(id)viewForElementIdentifier:(id)arg0 ;
-(void)addChoiceElement:(id)arg0 ;
-(void)choiceView:(id)arg0 tappedChoiceAtIndex:(NSUInteger)arg1 ;
-(void)choiceViewTappedHelpLink:(id)arg0 ;
-(void)performAction:(int)arg0 forElement:(id)arg1 completion:(id)arg2 ;
-(void)populatePostbackDictionary:(id)arg0 ;
-(void)setImage:(id)arg0 ;
-(void)setImageAlignment:(int)arg0 ;
-(void)setImageSize:(struct CGSize )arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif