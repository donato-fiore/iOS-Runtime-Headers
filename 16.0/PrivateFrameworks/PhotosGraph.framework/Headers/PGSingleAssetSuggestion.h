// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGSINGLEASSETSUGGESTION_H
#define PGSINGLEASSETSUGGESTION_H

@class PHAsset, NSDate, NSString, NSSet, NSArray;
@protocol PGSuggestion;

#import <Foundation/Foundation.h>


@interface PGSingleAssetSuggestion : NSObject <PGSuggestion>

 {
    PHAsset *_asset;
}


@property (readonly, nonatomic) BOOL containsUnverifiedPersons;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSSet *features; // ivar: _features
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isInvalid; // ivar: _isInvalid
@property (readonly, nonatomic) NSArray *keyAssets;
@property (readonly, nonatomic) unsigned char notificationQuality;
@property (readonly, nonatomic) unsigned short notificationState;
@property (copy, nonatomic) NSArray *reasons; // ivar: _reasons
@property (retain, nonatomic) id *recipe; // ivar: _recipe
@property (nonatomic) NSUInteger relevanceDurationInDays; // ivar: _relevanceDurationInDays
@property (readonly, nonatomic) NSArray *representativeAssets;
@property (nonatomic) CGFloat score; // ivar: _score
@property (readonly, nonatomic) unsigned short state;
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) unsigned short subtype; // ivar: _subtype
@property (readonly, copy, nonatomic) NSArray *suggestedPersonLocalIdentifiers;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) unsigned short type; // ivar: _type
@property (readonly, nonatomic) NSDate *universalEndDate;
@property (readonly, nonatomic) NSDate *universalStartDate;
@property (readonly, nonatomic) NSInteger version;


-(id)initWithType:(unsigned short)arg0 subtype:(unsigned short)arg1 asset:(id)arg2 ;


@end


#endif