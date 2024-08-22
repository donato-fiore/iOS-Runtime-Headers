// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NCACTIONBUTTONDESCRIPTION_H
#define _NCACTIONBUTTONDESCRIPTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _NCActionButtonDescription : NSObject {
    NSString *_selectorString;
}


@property (readonly, nonatomic, getter=isDefaultActionButton) BOOL defaultActionButton; // ivar: _defaultActionButton
@property (readonly, nonatomic) SEL selector;
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 selector:(SEL)arg1 defaultActionButton:(BOOL)arg2 ;


@end


#endif