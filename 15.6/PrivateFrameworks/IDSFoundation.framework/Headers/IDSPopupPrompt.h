// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSPOPUPPROMPT_H
#define IDSPOPUPPROMPT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IDSPopupPrompt : NSObject

@property (retain, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 promptMessage:(id)arg1 ;
-(void)launchPromptWithButton:(id)arg0 defaultUrl:(id)arg1 alternateButton:(id)arg2 alternateUrl:(id)arg3 ;


@end


#endif