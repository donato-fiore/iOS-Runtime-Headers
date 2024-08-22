// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMALERT_H
#define FMALERT_H

@class NSDictionary, NSUUID, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FMAlert : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *additionalSettings; // ivar: _additionalSettings
@property (retain, nonatomic) NSUUID *alertId; // ivar: _alertId
@property (copy, nonatomic) id *alternateButtonAction; // ivar: _alternateButtonAction
@property (retain, nonatomic) NSString *alternateButtonTitle; // ivar: _alternateButtonTitle
@property (nonatomic) NSUInteger category; // ivar: _category
@property (copy, nonatomic) id *defaultButtonAction; // ivar: _defaultButtonAction
@property (retain, nonatomic) NSString *defaultButtonTitle; // ivar: _defaultButtonTitle
@property (nonatomic) BOOL dismissMsgOnLock; // ivar: _dismissMsgOnLock
@property (nonatomic) BOOL dismissMsgOnUnlock; // ivar: _dismissMsgOnUnlock
@property (retain, nonatomic) NSString *msgText; // ivar: _msgText
@property (retain, nonatomic) NSString *msgTitle; // ivar: _msgTitle
@property (nonatomic) BOOL showMsgInLockScreen; // ivar: _showMsgInLockScreen
@property (nonatomic) CGFloat timeout; // ivar: _timeout


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif