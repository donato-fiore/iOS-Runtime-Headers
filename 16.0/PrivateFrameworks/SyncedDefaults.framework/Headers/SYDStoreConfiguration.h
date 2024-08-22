// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYDSTORECONFIGURATION_H
#define SYDSTORECONFIGURATION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SYDStoreID.h"

@interface SYDStoreConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *processName; // ivar: _processName
@property (retain, nonatomic) SYDStoreID *storeID; // ivar: _storeID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStoreID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif