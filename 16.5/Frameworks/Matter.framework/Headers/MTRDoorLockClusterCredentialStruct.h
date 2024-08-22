// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRDOORLOCKCLUSTERCREDENTIALSTRUCT_H
#define MTRDOORLOCKCLUSTERCREDENTIALSTRUCT_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRDoorLockClusterCredentialStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *credentialIndex; // ivar: _credentialIndex
@property (copy, nonatomic) NSNumber *credentialType; // ivar: _credentialType


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif