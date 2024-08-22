// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMCONTACTSTORE_H
#define IMCONTACTSTORE_H

@class NSMutableDictionary, NSArray, NSData, CNContactStore, NSString, NSDictionary, CNContact;
@protocol IMStateLoggable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "IMStateCaptureAssistant.h"

@interface IMContactStore : NSObject <IMStateLoggable>



@property (retain, nonatomic) NSMutableDictionary *CNIDToHandleIDsMap; // ivar: _CNIDToHandleIDsMap
@property (retain, nonatomic) NSArray *CNIDsForBatchFetch; // ivar: _CNIDsForBatchFetch
@property (retain, nonatomic) NSMutableDictionary *IDToCNContactMap; // ivar: _IDToCNContactMap
@property (nonatomic) BOOL batchFetchingForLaunchCompleted; // ivar: _batchFetchingForLaunchCompleted
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *changeHistoryFetchQueue; // ivar: _changeHistoryFetchQueue
@property (retain, nonatomic) NSData *changeHistoryToken; // ivar: _changeHistoryToken
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *handleIDToCNIDMap; // ivar: _handleIDToCNIDMap
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lastContactStoreSync; // ivar: _lastContactStoreSync
@property (nonatomic) CGFloat lastMeContactStoreSync; // ivar: _lastMeContactStoreSync
@property (retain, nonatomic) CNContact *meContact; // ivar: _meContact
@property (retain, nonatomic) IMStateCaptureAssistant *stateCaptureAssistant; // ivar: _stateCaptureAssistant
@property (readonly) Class superclass;


+(BOOL)_shouldAllowContactStoreLookup;
+(BOOL)isCNContactAKnownContact:(id)arg0 ;
+(BOOL)shouldShowAbbreviatedNames;
+(BOOL)shouldShowNickNames;
+(Class)IMCNChangeHistoryFetchRequestClass;
+(Class)IMCNContactFetchRequestClass;
+(Class)IMCNContactFormatterClass;
+(Class)IMCNGeminiManagerClass;
+(Class)IMCNLabeledValueClass;
+(Class)IMCNMeCardSharingPickerViewControllerClass;
+(Class)IMCNMutableContactClass;
+(Class)IMCNPhoneNumberClass;
+(id)IDsFromCNContact:(id)arg0 ;
+(id)IMContactStoreQueue;
+(id)_sortContactsFor:(id)arg0 ;
+(id)_stringFromContact:(id)arg0 withStyle:(NSInteger)arg1 ;
+(id)abbreviatedNameForCNContact:(id)arg0 ;
+(id)companyNameForCNContact:(id)arg0 ;
+(id)createMutableContactWithID:(id)arg0 ;
+(id)createMutableContactWithMapURL:(id)arg0 andLocalizedLocationString:(id)arg1 ;
+(id)descriptionForCNContact:(id)arg0 ;
+(id)dialingCodeForID:(id)arg0 ;
+(id)dialingForCurrentLocale;
+(id)displayNameForContact:(id)arg0 ;
+(id)displayNameWithCNNickNameOrFullNameOrCompanyNameOrAbbreviatedForContact:(id)arg0 ;
+(id)displayNameWithPhoneNumberOrEmailForContact:(id)arg0 ;
+(id)emailsForCNContact:(id)arg0 ;
+(id)firstNameForCNContact:(id)arg0 ;
+(id)fullNameForCNContact:(id)arg0 ;
+(id)kIMCNContactCropRectKey;
+(id)kIMCNContactEmailAddressesKey;
+(id)kIMCNContactIdentifierKey;
+(id)kIMCNContactImageDataAvailableKey;
+(id)kIMCNContactImageDataKey;
+(id)kIMCNContactLinkIdentifierKey;
+(id)kIMCNContactPhoneNumbersKey;
+(id)kIMCNContactThumbnailImageDataKey;
+(id)keysForCNContact;
+(id)keysForMeContact;
+(id)keysForNicknameHandling;
+(id)lastNameForCNContact:(id)arg0 ;
+(id)mePredicate;
+(id)nickNameForCNContact:(id)arg0 ;
+(id)phoneNumbersForCNContact:(id)arg0 ;
+(id)phoneticFirstNameForCNContact:(id)arg0 ;
+(id)phoneticFullNameForCNContact:(id)arg0 ;
+(id)phoneticLastNameForCNContact:(id)arg0 ;
+(id)predicateForID:(id)arg0 ;
+(id)sharedInstance;
+(id)validateAndCleanupID:(id)arg0 ;
+(id)validateAndFilterIDsForContactsBatchFetch:(id)arg0 ;
+(void)_logArray:(id)arg0 inBatchesOfSize:(NSInteger)arg1 ;
+(void)_logDictionaryInformation:(id)arg0 withSortedKeys:(id)arg1 inRange:(struct _NSRange )arg2 ;
+(void)logCNContact:(id)arg0 ;
+(void)logCNContact:(id)arg0 andID:(id)arg1 ;
+(void)logContactFetchRequestResults:(id)arg0 ;
+(void)logDictionary:(id)arg0 ;
+(void)logDictionary:(id)arg0 checkAdditionalLoggingEnabled:(BOOL)arg1 ;
+(void)logDictionary:(id)arg0 inBatchesOfSize:(NSInteger)arg1 ;
+(void)logHandleID:(id)arg0 ;
+(void)logHandleIDs:(id)arg0 checkAdditionalLoggingEnabled:(BOOL)arg1 ;
+(void)logHistoryToken:(id)arg0 ;
-(BOOL)isBatchFetchingForLaunchCompleted;
-(BOOL)isContactWithIDAlreadyFetched:(id)arg0 ;
-(BOOL)isIDAKnownContact:(id)arg0 ;
-(id)completedContact:(id)arg0 withKeys:(id)arg1 ;
-(id)fetchCNContactForHandleID:(id)arg0 withKeys:(id)arg1 ;
-(id)fetchCNContactForHandleWithID:(id)arg0 ;
-(id)fetchCNContactWithIdentifier:(id)arg0 ;
-(id)fetchMeContactWithKeys:(id)arg0 ;
-(id)fetchMeContactWithKeys:(id)arg0 withError:(*id)arg1 ;
-(id)getContactForID:(id)arg0 ;
-(id)getContactStore;
-(id)getCurrentHistoryToken;
-(id)getHandleIDToCNIDMap;
-(id)handleIDsForCNID:(id)arg0 ;
-(id)init;
-(id)initWithContactStore:(id)arg0 ;
-(id)stateDictionaryForDiagnosticsRequest;
-(void)addContact:(id)arg0 withID:(id)arg1 ;
-(void)addEntriesToIDToCNContactMap:(id)arg0 ;
-(void)addIDToCNIDToHandleIDsMap:(id)arg0 withCNID:(id)arg1 ;
-(void)cacheBatchFetchResults:(id)arg0 handleIDsWithoutCNID:(id)arg1 ;
-(void)checkForContactStoreChanges;
-(void)contactStoreChanged:(id)arg0 ;
-(void)dealloc;
-(void)fetchCNContactsForHandlesWithIDs:(id)arg0 isFinalBatch:(BOOL)arg1 ;
-(void)generateCNIDToHandleIDMap;
-(void)handleDropEverythingEvent;
-(void)meCardChanged:(id)arg0 ;
-(void)removeContactWithID:(id)arg0 ;
-(void)removeIDFromCNIDToHandleIDsMap:(id)arg0 withCNID:(id)arg1 ;
-(void)replaceContact:(id)arg0 withID:(id)arg1 ;
-(void)replaceWithMutableContactForID:(id)arg0 ;
-(void)resetMeCard;
-(void)setBatchFetchingCompleted;
-(void)setBatchFetchingIsCompleted:(BOOL)arg0 ;


@end


#endif