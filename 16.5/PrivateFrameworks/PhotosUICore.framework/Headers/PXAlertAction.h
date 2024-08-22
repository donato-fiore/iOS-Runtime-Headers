// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXALERTACTION_H
#define PXALERTACTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PXAlertAction : NSObject

@property (readonly, nonatomic) id *action; // ivar: _action
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)init;
-(id)initWithTitle:(id)arg0 style:(NSInteger)arg1 action:(id)arg2 ;


@end


#endif