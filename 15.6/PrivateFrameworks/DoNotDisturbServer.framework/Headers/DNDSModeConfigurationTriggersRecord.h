// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSMODECONFIGURATIONTRIGGERSRECORD_H
#define DNDSMODECONFIGURATIONTRIGGERSRECORD_H

@class NSString, NSArray;
@protocol NSCopying, NSMutableCopying, DNDSPartitionedBackingStoreRecord;

#import <Foundation/Foundation.h>


@interface DNDSModeConfigurationTriggersRecord : NSObject <NSCopying, NSMutableCopying, DNDSPartitionedBackingStoreRecord>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *triggers; // ivar: _triggers


+(id)migrateDictionaryRepresentation:(id)arg0 fromVersionNumber:(NSUInteger)arg1 toVersionNumber:(NSUInteger)arg2 ;
+(id)newWithDictionaryRepresentation:(id)arg0 context:(id)arg1 ;
+(id)newWithDictionaryRepresentation:(id)arg0 partitionedDictionaryRepresentation:(id)arg1 context:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithRecord:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationWithContext:(id)arg0 ;
-(id)init;
-(id)initWithTriggers:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif