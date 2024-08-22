// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSDIALOGREQUEST_H
#define AMSDIALOGREQUEST_H

@class NSDictionary, NSArray, NSURL, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "AMSDialogAction.h"
#import "AMSMetricsEvent.h"

@interface AMSDialogRequest : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL allowsNativeWatchCancelPlacement; // ivar: _allowsNativeWatchCancelPlacement
@property (readonly, nonatomic) NSDictionary *appearanceInfo; // ivar: _appearanceInfo
@property (copy, nonatomic) NSArray *buttonActions; // ivar: _buttonActions
@property (retain, nonatomic) AMSDialogAction *cancelAction; // ivar: _cancelAction
@property (retain, nonatomic) AMSDialogAction *defaultAction; // ivar: _defaultAction
@property (copy, nonatomic) NSURL *iconBundleURL; // ivar: _iconBundleURL
@property (copy, nonatomic) NSURL *iconURL; // ivar: _iconURL
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *logKey; // ivar: _logKey
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (copy, nonatomic) AMSMetricsEvent *metricsEvent; // ivar: _metricsEvent
@property (nonatomic) BOOL preventsCancelButtonStyle; // ivar: _preventsCancelButtonStyle
@property (nonatomic) NSInteger style; // ivar: _style
@property (copy, nonatomic) NSArray *textFields; // ivar: _textFields
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
+(id)requestWithTitle:(id)arg0 message:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithError:(id)arg0 ;
-(id)initWithTitle:(id)arg0 message:(id)arg1 ;
-(id)initWithTitle:(id)arg0 message:(id)arg1 appearanceInfo:(id)arg2 ;
-(id)locateActionWithIdentifier:(id)arg0 ;
-(void)addButtonAction:(id)arg0 ;
-(void)addTextField:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)replaceAction:(id)arg0 ;


@end


#endif