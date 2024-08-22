// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYAGGREGATESHARINGSUGGESTIONCONTAINER_H
#define PXSHAREDLIBRARYAGGREGATESHARINGSUGGESTIONCONTAINER_H

@class PHFetchResult, NSString, NSDate, NSSet, NSArray, PHAssetCollection;
@protocol _PXSharedLibrarySharingSuggestionContainer, NSCopying><NSObject;

#import <Foundation/Foundation.h>


@interface PXSharedLibraryAggregateSharingSuggestionContainer : NSObject <_PXSharedLibrarySharingSuggestionContainer>

 {
    PHFetchResult *_sharingSuggestions;
    NSString *_px_sl_title;
}


@property (readonly, nonatomic) NSDate *aggregateBeforeDate; // ivar: _aggregateBeforeDate
@property (readonly, nonatomic) _NSRange aggregationRange; // ivar: _aggregationRange
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *px_sl_containedSharingSuggestionObjectIDs; // ivar: _px_sl_containedSharingSuggestionObjectIDs
@property (readonly, nonatomic) NSArray *px_sl_containedSharingSuggestions; // ivar: _px_sl_containedSharingSuggestions
@property (readonly, nonatomic) PHAssetCollection *px_sl_containerCollection; // ivar: _px_sl_containerCollection
@property (readonly, nonatomic) NSObject<NSCopying><NSObject> *px_sl_identifier;
@property (readonly, nonatomic) NSString *px_sl_title;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSharingSuggestions:(id)arg0 aggregateBeforeDate:(id)arg1 ;
-(id)px_sl_fetchAssetCollections;
-(void)px_sl_getKeyAsset:(*id)arg0 suggestedDate:(*id)arg1 locations:(*id)arg2 ;


@end


#endif