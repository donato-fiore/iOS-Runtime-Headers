// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTRECENTSREFERENCE_H
#define CNCONTACTRECENTSREFERENCE_H

@class NSString, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNContactRecentsReference : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) NSNumber *recentContactID; // ivar: _recentContactID


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecentContactID:(id)arg0 domain:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif