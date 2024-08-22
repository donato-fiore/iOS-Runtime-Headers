// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFCARDACTION_H
#define MFCARDACTION_H

@class NSString, UIColor;

#import <Foundation/Foundation.h>


@interface MFCardAction : NSObject

@property (copy, nonatomic) id *dismissHandler; // ivar: _dismissHandler
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (nonatomic) BOOL handlerEnabled; // ivar: _handlerEnabled
@property (retain, nonatomic) NSString *imageName; // ivar: _imageName
@property (copy, nonatomic) NSString *shortTitle; // ivar: _shortTitle
@property (nonatomic) BOOL shouldDeferDismissHandler; // ivar: _shouldDeferDismissHandler
@property (nonatomic) BOOL shouldDismissCardBeforeExecuteHandler; // ivar: _shouldDismissCardBeforeExecuteHandler
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)cardActionWithTitle:(id)arg0 shortTitle:(id)arg1 imageName:(id)arg2 tintColor:(id)arg3 handler:(id)arg4 ;
+(id)cardActionWithTitle:(id)arg0 shortTitle:(id)arg1 imageName:(id)arg2 tintColor:(id)arg3 handlerEnabled:(BOOL)arg4 handler:(id)arg5 ;
-(void)executeHandler;
-(void)executeHandlerIfEnabled;


@end


#endif