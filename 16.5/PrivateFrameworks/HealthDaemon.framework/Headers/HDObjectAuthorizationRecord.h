// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDOBJECTAUTHORIZATIONRECORD_H
#define HDOBJECTAUTHORIZATIONRECORD_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDObjectAuthorizationRecord : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat modificationDate; // ivar: _modificationDate
@property (copy, nonatomic) NSUUID *objectUUID; // ivar: _objectUUID
@property (copy, nonatomic) NSUUID *sessionUUID; // ivar: _sessionUUID
@property (copy, nonatomic) NSUUID *sourceUUID; // ivar: _sourceUUID
@property (nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif