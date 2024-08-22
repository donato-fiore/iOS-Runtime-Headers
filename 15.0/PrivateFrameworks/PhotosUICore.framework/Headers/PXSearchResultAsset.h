// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSEARCHRESULTASSET_H
#define PXSEARCHRESULTASSET_H

@class NSString;
@protocol PXNewSearchResult;

#import <Foundation/Foundation.h>


@interface PXSearchResultAsset : NSObject <PXNewSearchResult>



@property (nonatomic) NSUInteger assetCount; // ivar: _assetCount
@property (copy, nonatomic) NSString *assetUUID; // ivar: _assetUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSUInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithAssetUUID:(id)arg0 ;


@end


#endif