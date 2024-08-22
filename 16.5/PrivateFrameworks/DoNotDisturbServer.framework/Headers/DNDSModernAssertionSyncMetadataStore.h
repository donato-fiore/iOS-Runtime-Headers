// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSMODERNASSERTIONSYNCMETADATASTORE_H
#define DNDSMODERNASSERTIONSYNCMETADATASTORE_H

@class NSString, NSMutableDictionary;
@protocol NSCopying, DNDSBackingStoreRecord;

#import <Foundation/Foundation.h>


@interface DNDSModernAssertionSyncMetadataStore : NSObject <NSCopying, DNDSBackingStoreRecord>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSMutableDictionary *lastReceivedStoreDate; // ivar: _lastReceivedStoreDate
@property (readonly, copy, nonatomic) NSMutableDictionary *lastSentStoreDate; // ivar: _lastSentStoreDate
@property (readonly, copy, nonatomic) NSMutableDictionary *pendingLastSentStoreDate; // ivar: _pendingLastSentStoreDate
@property (readonly) Class superclass;


+(id)newWithDictionaryRepresentation:(id)arg0 context:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithLastReceivedStoreDate:(id)arg0 lastSentStoreDate:(id)arg1 pendingLastSentStoreDate:(id)arg2 ;
-(id)_initWithStore:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationWithContext:(id)arg0 ;
-(id)init;


@end


#endif