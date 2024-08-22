// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXINFOTOBLENDINGCONFIDENCEMAPPER_H
#define ATXINFOTOBLENDINGCONFIDENCEMAPPER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ATXInfoToBlendingConfidenceMapper : NSObject {
    NSDictionary *_map;
}




-(NSInteger)blendingConfidenceCategoryForInfoConfidenceLevel:(NSInteger)arg0 ;
-(NSInteger)minInfoConfidenceLevelForBlendingConfidenceCategory:(NSInteger)arg0 ;
-(id)init;


@end


#endif