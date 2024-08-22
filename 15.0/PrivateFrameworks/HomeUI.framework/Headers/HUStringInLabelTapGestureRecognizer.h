// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUSTRINGINLABELTAPGESTURERECOGNIZER_H
#define HUSTRINGINLABELTAPGESTURERECOGNIZER_H

@class UITapGestureRecognizer, NSString, NSDictionary;



@interface HUStringInLabelTapGestureRecognizer : UITapGestureRecognizer

@property (retain, nonatomic) NSString *hitboxString; // ivar: _hitboxString
@property (readonly, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(BOOL)_didTapAttributedTextInLabel:(id)arg0 targetRange:(struct _NSRange )arg1 event:(id)arg2 ;
-(BOOL)shouldReceiveEvent:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 hitBoxString:(id)arg2 userInfo:(id)arg3 ;


@end


#endif