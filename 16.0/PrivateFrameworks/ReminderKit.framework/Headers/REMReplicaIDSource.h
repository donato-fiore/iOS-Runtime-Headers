// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMREPLICAIDSOURCE_H
#define REMREPLICAIDSOURCE_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "REMObjectID.h"

@interface REMReplicaIDSource : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) REMObjectID *accountID; // ivar: _accountID
@property (readonly, nonatomic) NSString *crdtID; // ivar: _crdtID


+(BOOL)supportsSecureCoding;
+(id)crdtIDWithObjectID:(id)arg0 property:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAccountID:(id)arg0 crdtID:(id)arg1 ;
-(id)initWithAccountID:(id)arg0 objectID:(id)arg1 property:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif