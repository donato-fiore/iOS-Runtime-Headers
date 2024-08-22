// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSIDSRECORD_H
#define DNDSIDSRECORD_H

@class NSMutableDictionary, NSString, NSDate;
@protocol DNDSBackingStoreRecord;

#import <Foundation/Foundation.h>

#import "DNDSIDSRecordMetadata.h"
#import "DNDSIDSRecordID.h"

@interface DNDSIDSRecord : NSObject <DNDSBackingStoreRecord>

 {
    NSMutableDictionary *_data;
    DNDSIDSRecordMetadata *_metadata;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDate *lastModified;
@property (readonly, copy, nonatomic) DNDSIDSRecordMetadata *metadata;
@property (readonly, copy, nonatomic) DNDSIDSRecordID *recordID;
@property (readonly) Class superclass;


+(id)newWithDictionaryRepresentation:(id)arg0 context:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithMetadata:(id)arg0 data:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationWithContext:(id)arg0 ;
-(id)initWithMetadata:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif