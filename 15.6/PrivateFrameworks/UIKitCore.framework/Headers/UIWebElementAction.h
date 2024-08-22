// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIWEBELEMENTACTION_H
#define UIWEBELEMENTACTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UIWebElementAction : NSObject {
    NSString *_title;
    id *_actionHandler;
}


@property (copy, nonatomic) id *dismissalHandler; // ivar: _dismissalHandler
@property (readonly, nonatomic) int type; // ivar: _type


+(id)customElementActionWithTitle:(id)arg0 actionHandler:(id)arg1 ;
+(id)standardElementActionWithType:(int)arg0 ;
+(id)standardElementActionWithType:(int)arg0 customTitle:(id)arg1 context:(id)arg2 ;
-(id)_title;
// -(id)initWithTitle:(id)arg0 actionHandler:(id)arg1 type:(unk)arg2  ;
-(void)_runActionWithElement:(id)arg0 targetURL:(id)arg1 documentView:(id)arg2 interactionLocation:(struct CGPoint )arg3 ;
-(void)dealloc;


@end


#endif