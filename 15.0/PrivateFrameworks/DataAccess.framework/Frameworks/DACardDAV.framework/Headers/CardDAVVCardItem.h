// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARDDAVVCARDITEM_H
#define CARDDAVVCARDITEM_H

@class NSMutableDictionary, NSArray, NSNumber, NSData, NSString, NSURL;
@protocol CoreDAVLeafDataPayload, DADataElement, DACardDAVRecord;

#import <Foundation/Foundation.h>


@interface CardDAVVCardItem : NSObject <CoreDAVLeafDataPayload, DADataElement>



@property (retain, nonatomic) NSMutableDictionary *UUIDToPersonCache;
@property (readonly, nonatomic) NSObject<DACardDAVRecord> *cardDAVRecordItem; // ivar: _cardDAVRecordItem
@property (readonly, nonatomic) NSArray *childrenOrder;
@property (retain, nonatomic) NSNumber *clientID;
@property (readonly, nonatomic) NSData *dataPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSURL *destinationURL;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *serverID;
@property (retain, nonatomic) NSURL *sourceURL;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *syncKey;


+(Class)currentImplementationClass;
+(id)itemWithABRecord:(*void)arg0 addressBook:(*void)arg1 outNeedsDBSave:(*BOOL)arg2 maxImageSize:(NSInteger)arg3 maxResourceSize:(NSInteger)arg4 inContainerWithURL:(id)arg5 ;
+(id)itemWithDACardDAVRecord:(id)arg0 contactStore:(id)arg1 outNeedsDBSave:(*BOOL)arg2 maxImageSize:(NSInteger)arg3 maxResourceSize:(NSInteger)arg4 inContainerWithURL:(id)arg5 ;
-(*void)abRecord;
-(BOOL)deleteFromContainer:(*void)arg0 ;
-(BOOL)deleteFromContainer:(*void)arg0 account:(id)arg1 ;
-(BOOL)loadLocalItemWithAccount:(id)arg0 ;
-(BOOL)saveIfGroupWithLocalObject:(id)arg0 toContainer:(id)arg1 shouldMergeProperties:(BOOL)arg2 outMergeDidChooseLocalProperties:(*BOOL)arg3 account:(id)arg4 ;
-(BOOL)saveServerIDToExistingItem;
-(BOOL)saveWithLocalObject:(*void)arg0 toContainer:(*void)arg1 shouldMergeProperties:(BOOL)arg2 outMergeDidChooseLocalProperties:(*BOOL)arg3 account:(id)arg4 ;
-(NSUInteger)saveWithLocalObject:(id)arg0 toContainer:(id)arg1 containerURL:(id)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(*BOOL)arg4 account:(id)arg5 shouldSaveGroups:(BOOL)arg6 ;
-(id)convertToDAContactSearchResultElement;
-(id)createOrphanedABRecordFromParsedVCardOutRecordType:(*unsigned int)arg0 ;
-(id)initWithURL:(id)arg0 eTag:(id)arg1 dataPayload:(id)arg2 inContainerWithURL:(id)arg3 withAccountInfoProvider:(id)arg4 ;
-(unsigned int)abRecordType;
-(void)loadClientIDs;
-(void)setLocalItem:(*void)arg0 ;


@end


#endif