// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSCONFIGURATIONRECORD_H
#define DNDSCONFIGURATIONRECORD_H

@class NSNumber, NSString;
@protocol NSCopying, NSMutableCopying, DNDSBackingStoreRecord;

#import <Foundation/Foundation.h>


@interface DNDSConfigurationRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>



@property (readonly, copy, nonatomic) NSNumber *applicationConfigurationType; // ivar: _applicationConfigurationType
@property (readonly, copy, nonatomic) NSNumber *compatibilityVersion; // ivar: _compatibilityVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSNumber *hideApplicationBadges; // ivar: _hideApplicationBadges
@property (readonly, copy, nonatomic) NSNumber *minimumBreakthroughUrgency; // ivar: _minimumBreakthroughUrgency
@property (readonly, copy, nonatomic) NSNumber *senderConfigurationType; // ivar: _senderConfigurationType
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSNumber *suppressionType; // ivar: _suppressionType


+(id)migrateDictionaryRepresentation:(id)arg0 fromVersionNumber:(NSUInteger)arg1 toVersionNumber:(NSUInteger)arg2 ;
+(id)newWithDictionaryRepresentation:(id)arg0 context:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithApplicationConfigurationType:(id)arg0 senderConfigurationType:(id)arg1 suppressionType:(id)arg2 minimumBreakthroughUrgency:(id)arg3 hideApplicationBadges:(id)arg4 compatibilityVersion:(id)arg5 ;
-(id)_initWithRecord:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationWithContext:(id)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif