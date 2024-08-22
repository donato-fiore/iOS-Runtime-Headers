// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKFOLLOWUPTEARDOWNCONTEXT_H
#define AKFOLLOWUPTEARDOWNCONTEXT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AKFollowUpTearDownContext : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *akAction; // ivar: _akAction
@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (copy, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif