// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIACTIONALERTACTIONITEM_H
#define VUIACTIONALERTACTIONITEM_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "VUIAction.h"

@interface VUIActionAlertActionItem : NSObject

@property (retain, nonatomic) VUIAction *action; // ivar: _action
@property (retain, nonatomic) NSDictionary *metrics; // ivar: _metrics
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 action:(id)arg1 metrics:(id)arg2 ;


@end


#endif