// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSGROUPSESSIONBROADCASTPARAMETER_H
#define IDSGROUPSESSIONBROADCASTPARAMETER_H

@class NSString, NSData;
@protocol NSSecureCoding, NSCopying, OS_nw_endpoint, OS_nw_parameters;

#import <Foundation/Foundation.h>


@interface IDSGroupSessionBroadcastParameter : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSObject<OS_nw_endpoint> *endpoint; // ivar: _endpoint
@property (readonly, nonatomic) NSString *groupSessionID; // ivar: _groupSessionID
@property (readonly, nonatomic) NSObject<OS_nw_parameters> *parameters; // ivar: _parameters
@property (readonly, nonatomic) NSData *salt; // ivar: _salt
@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGroupSessionID:(id)arg0 salt:(id)arg1 serviceName:(id)arg2 ;
-(id)initWithGroupSessionID:(id)arg0 serviceName:(id)arg1 ;
-(void)_requestNWConnectionforIDSGroupSessionBroadcastParameter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif