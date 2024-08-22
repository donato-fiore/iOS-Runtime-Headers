// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RECONTENTRANKER_H
#define RECONTENTRANKER_H

@class NSString;
@protocol REContentRankerProperties;

#import <Foundation/Foundation.h>


@interface REContentRanker : NSObject <REContentRankerProperties>

 {
    REContentFeatureExtractor _extractor;
}


@property (readonly, nonatomic) NSString *negativeContent;
@property (readonly, nonatomic) NSString *positiveContent;


-(BOOL)load:(id)arg0 error:(*id)arg1 ;
-(BOOL)save:(id)arg0 error:(*id)arg1 ;
-(BOOL)train:(id)arg0 isPositive:(BOOL)arg1 ;
-(NSInteger)negativeMapSize;
-(NSInteger)positiveMapSize;
-(id)init;
-(id)predict:(id)arg0 ;


@end


#endif