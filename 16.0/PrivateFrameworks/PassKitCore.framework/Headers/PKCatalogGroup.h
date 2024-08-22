// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCATALOGGROUP_H
#define PKCATALOGGROUP_H

@class NSNumber, NSMutableArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKCatalogGroup : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSNumber *groupID; // ivar: _groupID
@property (nonatomic) BOOL isUbiquitous; // ivar: _isUbiquitous
@property (retain, nonatomic) NSMutableArray *uniqueIDs; // ivar: _uniqueIDs


+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToGroup:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif