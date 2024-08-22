// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDAPPCONTAINERTUPLE_H
#define CKDAPPCONTAINERTUPLE_H

@class CKContainerID, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CKDApplicationID.h"

@interface CKDAppContainerTuple : NSObject <NSCopying>



@property (readonly, nonatomic) CKDApplicationID *applicationID; // ivar: _applicationID
@property (readonly, nonatomic) CKContainerID *containerID; // ivar: _containerID
@property (copy, nonatomic) NSString *personaID; // ivar: _personaID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)CKPropertiesDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithApplicationID:(id)arg0 containerID:(id)arg1 personaID:(id)arg2 ;


@end


#endif