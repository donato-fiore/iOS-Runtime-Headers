// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIMENUITEM_H
#define UIMENUITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UIMenuItem : NSObject

@property (nonatomic) SEL action; // ivar: _action
@property (nonatomic) BOOL dontDismiss; // ivar: _dontDismiss
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)init;
-(id)initWithTitle:(id)arg0 action:(SEL)arg1 ;


@end


#endif