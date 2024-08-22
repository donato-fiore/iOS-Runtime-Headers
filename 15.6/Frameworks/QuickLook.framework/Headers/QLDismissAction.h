// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLDISMISSACTION_H
#define QLDISMISSACTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface QLDismissAction : NSObject

@property (nonatomic) NSInteger alertStyle; // ivar: _alertStyle
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) BOOL shouldDismissQuickLookAutomatically; // ivar: _shouldDismissQuickLookAutomatically
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)actionWithTitle:(id)arg0 alertStyle:(NSInteger)arg1 shouldDismissQuickLookAutomatically:(BOOL)arg2 handler:(id)arg3 ;
+(id)actionWithTitle:(id)arg0 handler:(id)arg1 ;
-(id)initWithTitle:(id)arg0 alertStyle:(NSInteger)arg1 shouldDismissQuickLookAutomatically:(BOOL)arg2 handler:(id)arg3 ;


@end


#endif