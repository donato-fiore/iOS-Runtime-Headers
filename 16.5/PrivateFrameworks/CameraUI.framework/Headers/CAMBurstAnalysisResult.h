// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMBURSTANALYSISRESULT_H
#define CAMBURSTANALYSISRESULT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface CAMBurstAnalysisResult : NSObject

@property (readonly, copy, nonatomic) NSArray *allAssetIdentifiers; // ivar: _allAssetIdentifiers
@property (readonly, copy, nonatomic) NSString *bestAssetIdentifier; // ivar: _bestAssetIdentifier
@property (readonly, copy, nonatomic) NSArray *goodAssetIdentifiers; // ivar: _goodAssetIdentifiers
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier


-(id)description;
-(id)init;


@end


#endif