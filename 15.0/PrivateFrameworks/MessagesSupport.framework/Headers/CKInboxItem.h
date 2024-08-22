// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKINBOXITEM_H
#define CKINBOXITEM_H

@class NSNumber, NSUUID;

#import <Foundation/Foundation.h>

#import "CKInboxItemSwift.h"

@interface CKInboxItem : NSObject

@property (copy, nonatomic) id *action; // ivar: _action
@property (readonly, copy, nonatomic) NSNumber *filterMode; // ivar: _filterMode
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) CKInboxItemSwift *inboxItemSwift; // ivar: _inboxItemSwift


-(id)description;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 systemImage:(id)arg2 accessoryText:(id)arg3 filterMode:(id)arg4 action:(id)arg5 ;
-(void)updateAccessory:(id)arg0 ;


@end


#endif