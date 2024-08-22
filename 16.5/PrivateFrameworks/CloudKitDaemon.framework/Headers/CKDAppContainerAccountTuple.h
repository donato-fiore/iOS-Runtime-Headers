// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDAPPCONTAINERACCOUNTTUPLE_H
#define CKDAPPCONTAINERACCOUNTTUPLE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CKDAppContainerTuple.h"

@interface CKDAppContainerAccountTuple : NSObject <NSCopying>



@property (copy, nonatomic) NSString *accountID; // ivar: _accountID
@property (retain, nonatomic) CKDAppContainerTuple *appContainerTuple; // ivar: _appContainerTuple


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)CKPropertiesDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAppContainerTuple:(id)arg0 accountID:(id)arg1 ;


@end


#endif