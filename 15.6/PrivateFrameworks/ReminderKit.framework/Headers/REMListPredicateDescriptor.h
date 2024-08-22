// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMLISTPREDICATEDESCRIPTOR_H
#define REMLISTPREDICATEDESCRIPTOR_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "REMObjectID.h"

@interface REMListPredicateDescriptor : NSObject <NSSecureCoding>



@property (retain, nonatomic) REMObjectID *accountID; // ivar: _accountID
@property (retain, nonatomic) NSArray *objectIDs; // ivar: _objectIDs
@property (retain, nonatomic) REMObjectID *parentListID; // ivar: _parentListID
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)predicateDescriptorForAllLists;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif