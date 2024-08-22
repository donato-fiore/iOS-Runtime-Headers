// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ABSPERSON_H
#define ABSPERSON_H

@class NSString, CNMutableContact, NSMutableSet;
@protocol ABSRecord;

#import <Foundation/Foundation.h>

#import "ABSAddressBook.h"
#import "ABSSource.h"

@interface ABSPerson : NSObject <ABSRecord>



@property (readonly, nonatomic) NSString *CNIdentifierString;
@property (weak, nonatomic) ABSAddressBook *addressBook; // ivar: _addressBook
@property (retain, nonatomic) CNMutableContact *cnImpl; // ivar: _cnImpl
@property (readonly, nonatomic) NSString *compositeName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int id;
@property (retain, nonatomic) NSMutableSet *nonNilSetProperties; // ivar: _nonNilSetProperties
@property (retain, nonatomic) NSString *revertedRecordIdentifier; // ivar: _revertedRecordIdentifier
@property (weak, nonatomic) ABSSource *source; // ivar: _source
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int type;


+(BOOL)shortNameFormatEnabled;
+(BOOL)shortNameFormatPrefersNicknames;
+(id)copyCompositeNameDelimiterForPerson:(id)arg0 ;
+(id)createPeopleInSource:(id)arg0 withVCardRepresentation:(id)arg1 ;
+(id)defaultKeysToFetch;
+(id)localizedNameForProperty:(int)arg0 ;
+(id)nameForProperty:(int)arg0 ;
+(id)propertyKeyForPropertyID:(int)arg0 ;
+(id)vCardRepresentationForPeople:(id)arg0 ;
+(unsigned int)compositeNameFormatForPerson:(id)arg0 ;
+(unsigned int)sortOrdering;
+(unsigned int)typeForProperty:(int)arg0 ;
+(void)initialize;
-(*void)copyValueForProperty:(int)arg0 ;
-(?)setValue:(?)arg0 forPropertywithError;
-(BOOL)completeCNImplIfNeededWithKeysToFetch:(id)arg0 ;
-(BOOL)getIdentifier:(*int)arg0 label:(*id)arg1 forMultiValueMatchingValue:(id)arg2 property:(int)arg3 ;
-(BOOL)hasImageData;
-(BOOL)removeImageDataWithError:(*id)arg0 ;
-(BOOL)removeProperty:(int)arg0 withError:(*id)arg1 ;
-(BOOL)setImageData:(id)arg0 withError:(*id)arg1 ;
-(NSInteger)comparePersonByName:(id)arg0 sortOrdering:(unsigned int)arg1 ;
-(NSUInteger)_cfTypeID;
-(id)compositeNameIgnoringOrganization:(BOOL)arg0 ;
-(id)copyCompositeNameDelimiter;
-(id)copyImageData;
-(id)copyImageDataWithFormat:(int)arg0 ;
-(id)init;
-(id)initWithMutableContact:(id)arg0 ;
-(id)initWithMutableContact:(id)arg0 source:(id)arg1 ;
-(id)initWithSource:(id)arg0 ;
-(id)linkedPeople;
-(id)shortName;
-(id)soundIdentifierForMultivalueIdentifier:(int)arg0 ;
-(id)stringFromFormatter:(id)arg0 ;
-(void)replaceRecordStorageWithCNObject:(id)arg0 ;
-(void)setValue:(id)arg0 forSoundIdentifier:(int)arg1 ;


@end


#endif