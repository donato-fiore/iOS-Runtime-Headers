// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSEARCHRESULTASSETAGGREGATION_H
#define PXSEARCHRESULTASSETAGGREGATION_H

@class NSArray, NSString;
@protocol PXNewSearchResult;

#import <Foundation/Foundation.h>


@interface PXSearchResultAssetAggregation : NSObject <PXNewSearchResult>



@property (nonatomic) NSUInteger assetCount; // ivar: _assetCount
@property (readonly, copy, nonatomic) NSArray *assetUUIDs; // ivar: _assetUUIDs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSUInteger subtype; // ivar: _subtype
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *thumbnailAssetUUID; // ivar: _thumbnailAssetUUID
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSUInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 assetUUIDs:(id)arg2 subtype:(NSUInteger)arg3 ;


@end


#endif