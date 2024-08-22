// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSAPPLICATIONCONFIGURATIONRECORD_H
#define DNDSAPPLICATIONCONFIGURATIONRECORD_H

@class NSSet, NSString, NSNumber;
@protocol NSCopying, NSMutableCopying, DNDSBackingStoreRecord;

#import <Foundation/Foundation.h>


@interface DNDSApplicationConfigurationRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>



@property (readonly, copy, nonatomic) NSSet *allowedThreads; // ivar: _allowedThreads
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSSet *deniedThreads; // ivar: _deniedThreads
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSNumber *minimumBreakthroughUrgency; // ivar: _minimumBreakthroughUrgency
@property (readonly) Class superclass;


+(id)migrateDictionaryRepresentation:(id)arg0 fromVersionNumber:(NSUInteger)arg1 toVersionNumber:(NSUInteger)arg2 ;
+(id)newWithDictionaryRepresentation:(id)arg0 context:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithMinimumBreakthroughUrgency:(id)arg0 allowedThreads:(id)arg1 deniedThreads:(id)arg2 ;
-(id)_initWithRecord:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationWithContext:(id)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif