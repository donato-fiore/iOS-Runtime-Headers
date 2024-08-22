// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLICATIONMESSAGECONTENT_H
#define PKAPPLICATIONMESSAGECONTENT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKApplicationMessageAction.h"
#import "PKApplicationMessageContentDefault.h"
#import "PKApplicationMessageGroupDescriptor.h"

@interface PKApplicationMessageContent : NSObject <NSSecureCoding>



@property (readonly, nonatomic) PKApplicationMessageAction *action; // ivar: _action
@property (readonly, nonatomic) PKApplicationMessageContentDefault *contentTypeDefault;
@property (readonly, nonatomic) PKApplicationMessageGroupDescriptor *group; // ivar: _group
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif