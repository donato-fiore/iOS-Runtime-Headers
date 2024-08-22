// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIHOSTEDTEXTSERVICESESSION_H
#define _UIHOSTEDTEXTSERVICESESSION_H

@class UITextServiceSession;
@protocol _UIHostedTextServiceSessionDelegate;



@interface _UIHostedTextServiceSession : UITextServiceSession

@property (nonatomic) NSObject<_UIHostedTextServiceSessionDelegate> *delegate; // ivar: _delegate


+(id)showServiceForText:(id)arg0 selectedTextRange:(struct _NSRange )arg1 type:(NSInteger)arg2 fromRect:(struct CGRect )arg3 inView:(id)arg4 ;
+(id)showServiceForText:(id)arg0 type:(NSInteger)arg1 fromRect:(struct CGRect )arg2 inView:(id)arg3 ;
+(id)showServiceForType:(NSInteger)arg0 withContext:(id)arg1 ;
-(void)dismissTextServiceAnimated:(BOOL)arg0 ;
-(void)remoteSessionDidDismiss;


@end


#endif