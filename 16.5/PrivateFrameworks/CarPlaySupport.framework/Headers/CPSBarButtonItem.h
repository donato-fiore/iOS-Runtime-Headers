// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSBARBUTTONITEM_H
#define CPSBARBUTTONITEM_H

@class UIBarButtonItem, CPBarButton, NSString, NSUUID;
@protocol CPSButtonDelegate;



@interface CPSBarButtonItem : UIBarButtonItem <CPSButtonDelegate>



@property (readonly, nonatomic) CPBarButton *barButton; // ivar: _barButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPSButtonDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly) Class superclass;


-(id)_initWithCPBarButton:(id)arg0 showBackIndicator:(BOOL)arg1 ;
-(id)initWithCPBarButton:(id)arg0 ;
-(void)didSelectButton:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setImage:(id)arg0 ;
-(void)setTitle:(id)arg0 ;


@end


#endif