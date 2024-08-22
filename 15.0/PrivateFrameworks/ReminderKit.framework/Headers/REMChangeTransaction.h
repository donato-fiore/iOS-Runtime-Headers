// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMCHANGETRANSACTION_H
#define REMCHANGETRANSACTION_H

@class NSString, NSArray, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "REMObjectID.h"
#import "REMChangeToken.h"

@interface REMChangeTransaction : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) REMObjectID *accountID; // ivar: _accountID
@property (readonly, nonatomic) NSString *author; // ivar: _author
@property (readonly, nonatomic) NSArray *changes; // ivar: _changes
@property (readonly, nonatomic) NSString *storeID; // ivar: _storeID
@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (readonly, nonatomic) REMChangeToken *token; // ivar: _token


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif