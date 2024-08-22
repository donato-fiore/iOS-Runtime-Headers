// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDATADELETIONCONFIGURATION_H
#define HDDATADELETIONCONFIGURATION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HDDataDeletionConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) Class entityClass; // ivar: _entityClass
@property (nonatomic) BOOL failIfNotFound; // ivar: _failIfNotFound
@property (nonatomic) BOOL generateDeletedObjects; // ivar: _generateDeletedObjects
@property (nonatomic) BOOL notifyObservers; // ivar: _notifyObservers
@property (nonatomic) BOOL preserveExactStartAndEndDates; // ivar: _preserveExactStartAndEndDates
@property (copy, nonatomic) id *recursiveDeleteAuthorizationBlock; // ivar: _recursiveDeleteAuthorizationBlock
@property (copy, nonatomic) NSString *restrictedSourceBundleIdentifier; // ivar: _restrictedSourceBundleIdentifier
@property (nonatomic) BOOL secureDelete; // ivar: _secureDelete
@property (nonatomic) BOOL userRequested; // ivar: _userRequested


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif