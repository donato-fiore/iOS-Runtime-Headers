// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGENRICHABLEEVENTSUGGESTION_H
#define PGENRICHABLEEVENTSUGGESTION_H

@class NSDate, NSString, NSSet, NSArray;
@protocol PGSuggestion;

#import <Foundation/Foundation.h>


@interface PGEnrichableEventSuggestion : NSObject <PGSuggestion>



@property (readonly, nonatomic) BOOL containsUnverifiedPersons; // ivar: _containsUnverifiedPersons
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSSet *features; // ivar: _features
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInvalid;
@property (readonly, nonatomic) NSArray *keyAssets; // ivar: _keyAssets
@property (nonatomic) unsigned char notificationQuality; // ivar: _notificationQuality
@property (nonatomic) unsigned short notificationState; // ivar: _notificationState
@property (readonly, copy, nonatomic) NSArray *reasons;
@property (readonly, nonatomic) id *recipe;
@property (readonly, nonatomic) NSUInteger relevanceDurationInDays;
@property (readonly, nonatomic) NSArray *representativeAssets; // ivar: _representativeAssets
@property (readonly, nonatomic) CGFloat score;
@property (readonly, nonatomic) unsigned short state;
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) unsigned short subtype; // ivar: _subtype
@property (readonly, copy, nonatomic) NSArray *suggestedPersonLocalIdentifiers; // ivar: _suggestedPersonLocalIdentifiers
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) unsigned short type; // ivar: _type
@property (readonly, nonatomic) NSDate *universalEndDate; // ivar: _universalEndDate
@property (readonly, nonatomic) NSDate *universalStartDate; // ivar: _universalStartDate
@property (readonly, nonatomic) NSInteger version;


-(id)_whitelistedMeaningLabels;
-(id)assetCollectionToShareForAssetCollection:(id)arg0 loggingConnection:(id)arg1 ;
-(id)initWithType:(unsigned short)arg0 subtype:(unsigned short)arg1 enrichableEvent:(id)arg2 sharingSuggestionResults:(id)arg3 photoLibrary:(id)arg4 curationManager:(id)arg5 curationContext:(id)arg6 loggingConnection:(id)arg7 titleGenerationContext:(id)arg8 ;


@end


#endif