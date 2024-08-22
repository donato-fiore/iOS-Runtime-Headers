// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSMODECONFIGURATIONSRECORD_H
#define DNDSMODECONFIGURATIONSRECORD_H

@class NSMutableDictionary, NSString, NSArray;
@protocol NSCopying, NSMutableCopying, DNDSPartitionedBackingStoreRecord;

#import <Foundation/Foundation.h>


@interface DNDSModeConfigurationsRecord : NSObject <NSCopying, NSMutableCopying, DNDSPartitionedBackingStoreRecord>

 {
    NSMutableDictionary *_modeConfigurationsByModeIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *modeConfigurations;
@property (readonly) Class superclass;


+(id)backingStoreWithFileURL:(id)arg0 secureFileURL:(id)arg1 ;
+(id)migrateDictionaryRepresentation:(id)arg0 fromVersionNumber:(NSUInteger)arg1 toVersionNumber:(NSUInteger)arg2 ;
+(id)newWithDictionaryRepresentation:(id)arg0 context:(id)arg1 ;
+(id)newWithDictionaryRepresentation:(id)arg0 partitionedDictionaryRepresentation:(id)arg1 context:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithModeConfigurations:(id)arg0 ;
-(id)_initWithRecord:(id)arg0 ;
-(id)configurationForModeIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationWithContext:(id)arg0 ;
-(id)init;
-(id)modeConfigurationForModeIdentifier:(id)arg0 ;
-(id)modeForModeIdentifier:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)triggersForModeIdentifier:(id)arg0 ;
-(void)log:(id)arg0 withMessage:(id)arg1 ;


@end


#endif