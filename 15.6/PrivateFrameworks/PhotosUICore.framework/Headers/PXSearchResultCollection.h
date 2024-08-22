// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSEARCHRESULTCOLLECTION_H
#define PXSEARCHRESULTCOLLECTION_H

@class NSString, NSDate;
@protocol PXNewSearchResult;

#import <Foundation/Foundation.h>


@interface PXSearchResultCollection : NSObject <PXNewSearchResult>



@property (nonatomic) NSUInteger assetCount; // ivar: _assetCount
@property (copy, nonatomic) NSString *collectionUUID; // ivar: _collectionUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSUInteger subtype; // ivar: _subtype
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *thumbnailAssetUUID; // ivar: _thumbnailAssetUUID
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSUInteger type; // ivar: _type


+(id)_dateIntervalFormatter;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 assetCount:(NSUInteger)arg2 collectionUUID:(id)arg3 thumbnailAssetUUID:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 subtype:(NSUInteger)arg7 ;


@end


#endif