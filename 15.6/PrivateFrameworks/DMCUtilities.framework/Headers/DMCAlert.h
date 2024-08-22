// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMCALERT_H
#define DMCALERT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DMCAlert : NSObject

@property (retain, nonatomic) NSString *alternateButtonText; // ivar: _alternateButtonText
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (retain, nonatomic) NSString *defaultButtonText; // ivar: _defaultButtonText
@property (nonatomic) CGFloat dismissAfterTimeInterval; // ivar: _dismissAfterTimeInterval
@property (nonatomic) BOOL dismissOnLock; // ivar: _dismissOnLock
@property (nonatomic) BOOL displayOnLockScreen; // ivar: _displayOnLockScreen
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) id *notification; // ivar: _notification
@property (retain, nonatomic) NSString *otherButtonText; // ivar: _otherButtonText
@property (retain, nonatomic) NSString *summary; // ivar: _summary
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)notificationParametersOutFlags:(*NSUInteger)arg0 ;


@end


#endif