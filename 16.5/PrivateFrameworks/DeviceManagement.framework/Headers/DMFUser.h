// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMFUSER_H
#define DMFUSER_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DMFUser : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger dataQuota; // ivar: _dataQuota
@property (readonly, nonatomic) NSUInteger dataUsed; // ivar: _dataUsed
@property (readonly, nonatomic) BOOL hasDataToSync; // ivar: _hasDataToSync
@property (readonly, nonatomic) BOOL isCurrentUser; // ivar: _isCurrentUser
@property (readonly, copy, nonatomic) NSString *username; // ivar: _username


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUsername:(id)arg0 dataQuota:(NSUInteger)arg1 dataUsed:(NSUInteger)arg2 hasDataToSync:(BOOL)arg3 isCurrentUser:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif