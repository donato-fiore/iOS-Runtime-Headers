// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SMSFILTEREXTENSIONPARAMS_H
#define SMSFILTEREXTENSIONPARAMS_H

@class NSString;
@protocol NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SMSFilterExtensionParams : NSObject <NSCoding, NSSecureCoding>



@property NSUInteger action; // ivar: _action
@property NSUInteger category; // ivar: _category
@property NSUInteger filterMode; // ivar: _filterMode
@property (retain, nonatomic) NSString *filterModeStringValue; // ivar: _filterModeStringValue
@property (retain, nonatomic) NSString *folderName; // ivar: _folderName
@property (retain, nonatomic) NSString *iconName; // ivar: _iconName
@property (retain, nonatomic) NSString *label; // ivar: _label
@property NSUInteger orderOfPlacementInUI; // ivar: _orderOfPlacementInUI
@property NSUInteger subAction; // ivar: _subAction
@property NSUInteger subCategory; // ivar: _subCategory


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif