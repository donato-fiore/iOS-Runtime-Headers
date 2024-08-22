// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LTLANGUAGEINSTALLATIONSTATUS_H
#define _LTLANGUAGEINSTALLATIONSTATUS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _LTLanguageInstallationStatus : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat expectedTimeRemaining; // ivar: _expectedTimeRemaining
@property (nonatomic) BOOL isStalled; // ivar: _isStalled
@property (copy, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (nonatomic) NSUInteger offlineState; // ivar: _offlineState
@property (nonatomic) NSInteger progress; // ivar: _progress
@property (nonatomic) NSInteger totalExpected; // ivar: _totalExpected
@property (nonatomic) NSInteger totalWritten; // ivar: _totalWritten


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif