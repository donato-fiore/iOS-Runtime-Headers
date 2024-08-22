// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSDIALOG_H
#define SSDIALOG_H

@class NSArray, NSMutableDictionary, NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "SSDialogButton.h"

@interface SSDialog : NSObject {
    NSArray *_buttons;
    NSMutableDictionary *_dialogDictionary;
}


@property (copy, nonatomic) NSArray *buttons;
@property (retain, nonatomic) SSDialogButton *defaultButton;
@property (readonly, nonatomic) NSDictionary *dialogDictionary;
@property (readonly, nonatomic) NSString *dialogKind;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *title;


-(id)init;
-(id)initWithDialogDictionary:(id)arg0 ;
-(id)valueForProperty:(id)arg0 ;
-(void)_setValue:(id)arg0 forProperty:(id)arg1 ;
-(void)dealloc;


@end


#endif