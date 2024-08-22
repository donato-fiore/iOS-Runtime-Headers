// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSACCOUNTSARCHIVE_H
#define VSACCOUNTSARCHIVE_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VSAccountChannels.h"

@interface VSAccountsArchive : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *accounts; // ivar: _accounts
@property (copy, nonatomic) VSAccountChannels *channels; // ivar: _channels


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif