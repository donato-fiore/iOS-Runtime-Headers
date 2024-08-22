// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXUIALERTCONTEXT_H
#define AXUIALERTCONTEXT_H

@class UIImage, NSString, AXDispatchTimer, NSDictionary;
@protocol AXUIService;

#import <Foundation/Foundation.h>

#import "AXUIAlert.h"

@interface AXUIAlertContext : NSObject

@property (retain, nonatomic) AXUIAlert *alertView; // ivar: _alertView
@property (nonatomic) CGFloat creationTimeInterval; // ivar: _creationTimeInterval
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) CGFloat fadeAnimationDuration; // ivar: _fadeAnimationDuration
@property (retain, nonatomic) UIImage *iconImage; // ivar: _iconImage
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger priority; // ivar: _priority
@property (retain, nonatomic) NSObject<AXUIService> *service; // ivar: _service
@property (retain, nonatomic) AXDispatchTimer *showOrHideTimer; // ivar: _showOrHideTimer
@property (copy, nonatomic) NSString *subtitleText; // ivar: _subtitleText
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(id)description;


@end


#endif