// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTDAILYCASHDESTINATIONSSUMMARY_H
#define PKACCOUNTDAILYCASHDESTINATIONSSUMMARY_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKAccountDailyCashDestinationsSummary : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *destinations; // ivar: _destinations
@property (readonly, nonatomic) NSString *localizedFooterText; // ivar: _localizedFooterText
@property (readonly, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDestinations:(id)arg0 localizedTitle:(id)arg1 localizedFooterText:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif