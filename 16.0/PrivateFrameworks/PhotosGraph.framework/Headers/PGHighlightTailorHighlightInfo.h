// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGHIGHLIGHTTAILORHIGHLIGHTINFO_H
#define PGHIGHLIGHTTAILORHIGHLIGHTINFO_H

@class NSArray, CLSInvestigationPhotoKitFeeder, NSString, NSSet, NSDictionary;
@protocol PGHighlightModel;

#import <Foundation/Foundation.h>

#import "PGGraphHighlightNode.h"
#import "PGHighlightTailorContext.h"

@interface PGHighlightTailorHighlightInfo : NSObject

@property (readonly, nonatomic) BOOL babyIsPresent; // ivar: _babyIsPresent
@property (retain, nonatomic) NSArray *childHighlights; // ivar: _childHighlights
@property (readonly, nonatomic) CLSInvestigationPhotoKitFeeder *feeder; // ivar: _feeder
@property (readonly, nonatomic) NSObject<PGHighlightModel> *highlight; // ivar: _highlight
@property (readonly, nonatomic) PGGraphHighlightNode *highlightNode; // ivar: _highlightNode
@property (readonly) PGHighlightTailorContext *highlightTailorContext; // ivar: _highlightTailorContext
@property (copy, nonatomic) NSString *keyAssetPrivateUUID; // ivar: _keyAssetPrivateUUID
@property (copy, nonatomic) NSString *keyAssetSharedUUID; // ivar: _keyAssetSharedUUID
@property (retain, nonatomic) NSSet *meaningLabels; // ivar: _meaningLabels
@property (readonly, nonatomic) NSDictionary *meaningLabelsByChildHighlightUUID; // ivar: _meaningLabelsByChildHighlightUUID
@property (readonly, nonatomic) NSSet *momentNodes; // ivar: _momentNodes
@property (nonatomic) NSUInteger numberOfExtendedAssets; // ivar: _numberOfExtendedAssets
@property (readonly, nonatomic) BOOL petIsPresent; // ivar: _petIsPresent
@property (nonatomic) CGFloat promotionScore; // ivar: _promotionScore
@property (retain, nonatomic) NSArray *uuidsOfEligibleAssets; // ivar: _uuidsOfEligibleAssets


-(id)assetsForSharingFilter:(unsigned short)arg0 ;
-(id)description;
-(id)initForTestingWithHighlight:(id)arg0 ;
-(id)initWithHighlight:(id)arg0 graph:(id)arg1 highlightTailorContext:(id)arg2 ;
-(id)uuidsOfRequiredAssetsForSharingFilter:(unsigned short)arg0 ;


@end


#endif