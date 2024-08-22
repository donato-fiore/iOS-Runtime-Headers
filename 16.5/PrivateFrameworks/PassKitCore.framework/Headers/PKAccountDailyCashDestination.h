// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTDAILYCASHDESTINATION_H
#define PKACCOUNTDAILYCASHDESTINATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKAccountDailyCashDestination : NSObject <NSSecureCoding>



@property (readonly, nonatomic, getter=isCurrent) BOOL current; // ivar: _current
@property (readonly, nonatomic) NSUInteger destination; // ivar: _destination
@property (readonly, nonatomic) NSString *localizedSubtitle; // ivar: _localizedSubtitle
@property (readonly, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDestination:(NSUInteger)arg0 isCurrent:(BOOL)arg1 localizedTitle:(id)arg2 localizedSubtitle:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif