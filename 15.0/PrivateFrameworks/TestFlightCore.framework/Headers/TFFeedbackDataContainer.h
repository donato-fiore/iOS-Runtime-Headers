// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TFFEEDBACKDATACONTAINER_H
#define TFFEEDBACKDATACONTAINER_H

@class NSString, NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol TFFeedbackDataWritable, TFFeedbackDataSource, OS_dispatch_queue, TFFeedbackDataContainerObserver;

#import <Foundation/Foundation.h>


@interface TFFeedbackDataContainer : NSObject <TFFeedbackDataWritable, TFFeedbackDataSource>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableArray *dirtyEntryIdentifiers; // ivar: _dirtyEntryIdentifiers
@property (readonly, nonatomic) NSMutableArray *dirtyGroupIdentifiers; // ivar: _dirtyGroupIdentifiers
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *imageCollectionEntryMap; // ivar: _imageCollectionEntryMap
@property (readonly, nonatomic) NSMutableSet *includedGroupIdentifiers; // ivar: _includedGroupIdentifiers
@property (readonly, nonatomic) NSMutableSet *loadingEntryIdentifiers; // ivar: _loadingEntryIdentifiers
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSMutableDictionary *numberEntryMap; // ivar: _numberEntryMap
@property (weak, nonatomic) NSObject<TFFeedbackDataContainerObserver> *observer; // ivar: _observer
@property (readonly, nonatomic) NSMutableDictionary *stringEntryMap; // ivar: _stringEntryMap
@property (readonly) Class superclass;


-(BOOL)isEntryWithIdentifierLoading:(id)arg0 ;
-(BOOL)isGroupWithIdentifierIncluded:(id)arg0 ;
-(BOOL)isLoading;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)imageCollectionForIdentifer:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 includedGroupIdentifiers:(id)arg1 loadingEntryIdentifiers:(id)arg2 stringEntryMap:(id)arg3 numberEntryMap:(id)arg4 imageCollectionEntryMap:(id)arg5 dirtyGroupIdentifiers:(id)arg6 dirtyEntryIdentifiers:(id)arg7 ;
-(id)numberForIdentifier:(id)arg0 ;
-(id)objectForIdentifier:(id)arg0 ;
-(id)stringForIdentifier:(id)arg0 ;
-(void)_clearDirtyIdentifiers;
-(void)_markEntryIdentifierDirty:(id)arg0 ;
-(void)_markGroupIdentifierDirty:(id)arg0 ;
-(void)_notifyObserverOfUpdates;
-(void)overwriteWithContentsOfDataContainer:(id)arg0 ;
-(void)performBatchUpdates:(id)arg0 ;
// -(void)performBatchUpdates:(id)arg0 suppressingNotifications:(unk)arg1  ;
-(void)prepareInitialValuesForForm:(id)arg0 ;
-(void)setEntryLoadingForIdentifier:(id)arg0 toValue:(BOOL)arg1 ;
-(void)setGroupInclusionForIdentifier:(id)arg0 toValue:(BOOL)arg1 ;
-(void)setImageCollectionForIdentifier:(id)arg0 toValue:(id)arg1 ;
-(void)setNumberForIdentifier:(id)arg0 toValue:(id)arg1 ;
-(void)setStringForIdentifier:(id)arg0 toValue:(id)arg1 ;


@end


#endif