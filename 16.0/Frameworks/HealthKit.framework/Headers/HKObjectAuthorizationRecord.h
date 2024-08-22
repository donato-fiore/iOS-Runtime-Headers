// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKOBJECTAUTHORIZATIONRECORD_H
#define HKOBJECTAUTHORIZATIONRECORD_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKObjectAuthorizationRecord : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat modificationDate; // ivar: _modificationDate
@property (copy, nonatomic) NSUUID *objectUUID; // ivar: _objectUUID
@property (copy, nonatomic) NSUUID *sessionUUID; // ivar: _sessionUUID
@property (copy, nonatomic) NSUUID *sourceUUID; // ivar: _sourceUUID
@property (nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectUUID:(id)arg0 sourceUUID:(id)arg1 sessionUUID:(id)arg2 status:(NSInteger)arg3 modificationDate:(CGFloat)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif