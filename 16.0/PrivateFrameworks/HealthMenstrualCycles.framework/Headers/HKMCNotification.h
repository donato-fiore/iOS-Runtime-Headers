// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMCNOTIFICATION_H
#define HKMCNOTIFICATION_H

@class NSString, NSDateComponents;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKMCNotification : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *category; // ivar: _category
@property (copy, nonatomic) NSDateComponents *dueDateComponents; // ivar: _dueDateComponents


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCategory:(id)arg0 dueDateComponents:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif