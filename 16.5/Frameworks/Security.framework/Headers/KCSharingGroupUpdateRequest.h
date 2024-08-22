// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KCSHARINGGROUPUPDATEREQUEST_H
#define KCSHARINGGROUPUPDATEREQUEST_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "KCSharingGroup.h"

@interface KCSharingGroupUpdateRequest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) KCSharingGroup *group; // ivar: _group


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUpdatedGroup:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif