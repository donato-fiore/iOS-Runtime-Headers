// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLICATIONMESSAGE_H
#define PKAPPLICATIONMESSAGE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKApplicationMessageContent.h"
#import "PKApplicationMessageRegistration.h"

@interface PKApplicationMessage : NSObject <NSSecureCoding>



@property (readonly, nonatomic) PKApplicationMessageContent *content; // ivar: _content
@property (readonly, nonatomic) PKApplicationMessageRegistration *registration; // ivar: _registration


+(BOOL)supportsSecureCoding;
+(id)createLocalWithIdentifier:(id)arg0 createdDate:(id)arg1 priority:(NSUInteger)arg2 badge:(BOOL)arg3 content:(id)arg4 ;
+(id)createWithRegistration:(id)arg0 content:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif