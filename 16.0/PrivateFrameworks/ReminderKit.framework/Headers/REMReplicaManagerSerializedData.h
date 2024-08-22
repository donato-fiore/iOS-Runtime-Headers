// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMREPLICAMANAGERSERIALIZEDDATA_H
#define REMREPLICAMANAGERSERIALIZEDDATA_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REMReplicaManagerSerializedData : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL isRepresentingDiscardedReplicaManager;
@property (readonly, nonatomic) NSData *managerData; // ivar: _managerData
@property (readonly, nonatomic) NSUInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)serializedDataRepresentingDiscardedReplicaManager;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithManagerData:(id)arg0 version:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif