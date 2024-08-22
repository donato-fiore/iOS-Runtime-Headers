// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSXPCTIMER_H
#define DNDSXPCTIMER_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface DNDSXPCTimer : NSObject

@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (copy, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier
@property (nonatomic, getter=isUserVisible) BOOL userVisible; // ivar: _userVisible


-(id)initWithFireDate:(id)arg0 serviceIdentifier:(id)arg1 userVisible:(BOOL)arg2 ;


@end


#endif