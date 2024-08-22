// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FKPERSON_H
#define FKPERSON_H

@class NSString, NSNumber, NSSet, NSMutableDictionary, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FKPerson : NSObject <NSCopying, NSSecureCoding>

 {
    NSString *_primaryDestination;
    NSString *_initials;
    NSNumber *_phoneNumberCount;
    NSNumber *_emailAddressCount;
    int _abRecordID;
    NSString *_abRecordGUID;
    NSString *_abDatabaseUID;
    NSString *_name;
    NSSet *_allValues;
    NSMutableDictionary *_metadata;
}


@property (readonly, nonatomic) BOOL hasUnreadMessages; // ivar: _hasUnreadMessages
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (nonatomic) BOOL needsSave; // ivar: _needsSave
@property (retain, nonatomic) NSString *preferredReplyAs; // ivar: _preferredReplyAs


+(BOOL)supportsSecureCoding;
+(id)_allEmailValuesForRecord:(*void)arg0 ;
+(id)_allEmailValuesInSet:(id)arg0 ;
+(id)_allPhoneValuesForRecord:(*void)arg0 ;
+(id)_allPhoneValuesInSet:(id)arg0 ;
+(id)allValuesForPerson:(*void)arg0 ;
+(id)preferredNameForPerson:(*void)arg0 ;
+(id)sharedMetadataQueue;
+(int)addValue:(*void)arg0 withLabel:(struct __CFString *)arg1 toPerson:(*void)arg2 property:(int)arg3 ;
-(*void)_bestRecordMatchFromDictionary:(id)arg0 addressBook:(*void)arg1 ;
-(*void)copyABPersonWithAddressBook:(*void)arg0 ;
-(BOOL)_updateFromDictionaryRepresentation:(id)arg0 shouldLogUpdates:(BOOL)arg1 ;
-(BOOL)hasName;
-(BOOL)isEqualToDictionaryRepresentation:(id)arg0 ;
-(BOOL)isLikePerson:(id)arg0 ;
-(BOOL)updateFromDictionaryRepresentation:(id)arg0 ;
-(NSUInteger)allValuesCount;
-(float)_allValuesMatchScore:(id)arg0 ;
-(id)_recordMatchDictionaryFromCFArray:(struct __CFArray *)arg0 followLinks:(BOOL)arg1 addressBook:(*void)arg2 ;
-(id)abDatabaseUID;
-(id)abRecordGUID;
-(id)allValues;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)displayName;
-(id)init;
-(id)initWithABRecordGUID:(id)arg0 addressBook:(*void)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDestinations:(id)arg0 addressBook:(*void)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg0 addressBook:(*void)arg1 ;
-(id)initWithFavorite:(id)arg0 addressBook:(*void)arg1 ;
-(id)initials;
-(id)metadataValueForKey:(id)arg0 ;
-(id)primaryDestination;
-(void)_postChangeNotification;
-(void)_reconcile:(*void)arg0 canPostChangeNotification:(BOOL)arg1 shouldLogUpdates:(BOOL)arg2 ;
-(void)_setABRecordGUID:(id)arg0 ;
-(void)addMetadataEntriesFromDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)refreshWithAddressBook:(*void)arg0 ;
-(void)removeAllMetadataValues;


@end


#endif