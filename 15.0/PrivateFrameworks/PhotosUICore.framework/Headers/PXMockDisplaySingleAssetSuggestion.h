// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMOCKDISPLAYSINGLEASSETSUGGESTION_H
#define PXMOCKDISPLAYSINGLEASSETSUGGESTION_H

@class NSDictionary, PHAsset, NSString, NSDate;
@protocol PXDisplaySuggestion;

#import <Foundation/Foundation.h>


@interface PXMockDisplaySingleAssetSuggestion : NSObject <PXDisplaySuggestion>



@property (readonly, nonatomic) NSDictionary *actionProperties; // ivar: _actionProperties
@property (readonly, nonatomic) PHAsset *asset; // ivar: _asset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSString *localizedSubtitle; // ivar: _localizedSubtitle
@property (readonly, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) unsigned short state; // ivar: _state
@property (readonly, nonatomic) unsigned short subtype; // ivar: _subtype
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) unsigned short type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fetchKeyAssets;
-(id)initWithAsset:(id)arg0 type:(unsigned short)arg1 subtype:(unsigned short)arg2 title:(id)arg3 ;


@end


#endif