// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RUIMULTICHOICEELEMENT_H
#define RUIMULTICHOICEELEMENT_H

@class NSString;
@protocol RUIMultiChoiceActionHandler;


#import "RUIElement.h"
#import "RUIObjectModel.h"
#import "RUIMultiChoiceView.h"

@interface RUIMultiChoiceElement : RUIElement <RUIMultiChoiceActionHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) RUIObjectModel *objectModel; // ivar: _objectModel
@property (readonly) Class superclass;
@property (retain, nonatomic) RUIMultiChoiceView *view; // ivar: _view


-(CGFloat)estimatedViewHeight;
-(id)initWithAttributes:(id)arg0 parent:(id)arg1 ;
-(id)sourceURL;
-(id)viewForElementIdentifier:(id)arg0 ;
-(void)addChoice:(id)arg0 ;
-(void)didTapChoice:(id)arg0 ;
-(void)didTapFooter:(id)arg0 ;
-(void)startActivityIndicatorForChoice:(id)arg0 ;
-(void)stopActivityIndicatorForChoice:(id)arg0 ;


@end


#endif