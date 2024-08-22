// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMMOMENTSENGAGEMENTBUNDLESUMMARY_H
#define BMMOMENTSENGAGEMENTBUNDLESUMMARY_H

@class BMEventBase, NSArray, NSString, NSDate;
@protocol BMStoreData;


#import "BMMomentsEngagementSuggestionIdentifier.h"

@interface BMMomentsEngagementBundleSummary : BMEventBase <BMStoreData>

 {
    BOOL _hasRaw_startDate;
    CGFloat _raw_startDate;
    BOOL _hasRaw_endDate;
    CGFloat _raw_endDate;
}


@property (readonly, nonatomic) NSArray *attachedPhotoAssets; // ivar: _attachedPhotoAssets
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *endDate;
@property (nonatomic) BOOL hasRankingScore; // ivar: _hasRankingScore
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BMMomentsEngagementSuggestionIdentifier *identifier; // ivar: _identifier
@property (readonly, nonatomic) int interfaceType; // ivar: _interfaceType
@property (readonly, nonatomic) CGFloat rankingScore; // ivar: _rankingScore
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 interfaceType:(int)arg3 rankingScore:(id)arg4 attachedPhotoAssets:(id)arg5 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif