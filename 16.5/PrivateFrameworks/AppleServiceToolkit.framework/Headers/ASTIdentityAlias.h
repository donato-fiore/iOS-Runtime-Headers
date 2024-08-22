// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASTIDENTITYALIAS_H
#define ASTIDENTITYALIAS_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASTIdentityAlias : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSDictionary *dictionary; // ivar: _dictionary


+(BOOL)isCoreRepairFrameworkAvailable;
+(BOOL)supportsSecureCoding;
+(id)identityAliasWithChipId:(id)arg0 uniqueChipId:(id)arg1 ;
+(id)identityAliasWithMainLogicBoardSerialNumber:(id)arg0 ;
+(id)identityAliasWithSerialNumber:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithChipId:(id)arg0 uniqueChipId:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMainLogicBoardSerialNumber:(id)arg0 ;
-(id)initWithSerialNumber:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif