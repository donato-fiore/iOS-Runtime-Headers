// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSDIALOGBUTTON_H
#define SSDIALOGBUTTON_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface SSDialogButton : NSObject {
    NSDictionary *_actionDictionary;
    NSString *_title;
}


@property (readonly, nonatomic) NSString *URLTarget;
@property (readonly, nonatomic) id *actionParameter;
@property (readonly, nonatomic) NSString *buttonAction;
@property (readonly, copy, nonatomic) NSString *buttonTitle;


+(id)buttonWithTitle:(id)arg0 ;
-(id)init;
-(id)initWithTitle:(id)arg0 actionDictionary:(id)arg1 ;
-(id)valueForActionProperty:(id)arg0 ;
-(void)dealloc;


@end


#endif