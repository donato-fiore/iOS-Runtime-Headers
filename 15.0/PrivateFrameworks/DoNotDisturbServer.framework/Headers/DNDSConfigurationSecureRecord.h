// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSCONFIGURATIONSECURERECORD_H
#define DNDSCONFIGURATIONSECURERECORD_H

@class NSDictionary, NSString, NSSet;
@protocol NSCopying, NSMutableCopying, DNDSBackingStoreRecord;

#import <Foundation/Foundation.h>

#import "DNDSSenderConfigurationRecord.h"

@interface DNDSConfigurationSecureRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>



@property (readonly, copy, nonatomic) NSDictionary *allowedApplications; // ivar: _allowedApplications
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSSet *deniedApplications; // ivar: _deniedApplications
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) DNDSSenderConfigurationRecord *senderConfiguration; // ivar: _senderConfiguration
@property (readonly) Class superclass;


+(id)migrateDictionaryRepresentation:(id)arg0 fromVersionNumber:(NSUInteger)arg1 toVersionNumber:(NSUInteger)arg2 ;
+(id)newWithDictionaryRepresentation:(id)arg0 context:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithRecord:(id)arg0 ;
-(id)_initWithSenderConfiguration:(id)arg0 allowedApplications:(id)arg1 deniedApplications:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationWithContext:(id)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)log:(id)arg0 withPrefix:(id)arg1 ;


@end


#endif