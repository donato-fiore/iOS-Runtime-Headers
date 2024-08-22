// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSIDSRECORDID_H
#define DNDSIDSRECORDID_H

@class NSString;
@protocol NSCopying, DNDSBackingStoreRecord;

#import <Foundation/Foundation.h>


@interface DNDSIDSRecordID : NSObject <NSCopying, DNDSBackingStoreRecord>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *zone; // ivar: _zone


+(id)newWithDictionaryRepresentation:(id)arg0 context:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithRecordID:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationWithContext:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 zone:(id)arg1 ;


@end


#endif