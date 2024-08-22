// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSMESSAGINGCAPABILITIES_H
#define IDSMESSAGINGCAPABILITIES_H

@class NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IDSMessagingCapabilities : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSSet *requiredCapabilities; // ivar: _requiredCapabilities
@property (retain, nonatomic) NSSet *requiredMissingCapabilities; // ivar: _requiredMissingCapabilities


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequiredCapabilities:(id)arg0 requiredMissingCapabilities:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif