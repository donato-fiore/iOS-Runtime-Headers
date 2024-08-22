// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADCOUNTEDGRAPHICFEATURE_H
#define OADCOUNTEDGRAPHICFEATURE_H


#import <Foundation/Foundation.h>


@interface OADCountedGraphicFeature : NSObject {
    id *mFeature;
}


@property (nonatomic) NSUInteger usageCount; // ivar: mUsageCount


-(NSInteger)compareUsageCount:(id)arg0 ;
-(id)feature;
-(id)initWithFeature:(id)arg0 ;
-(void)dealloc;
-(void)incrementUsageCount;


@end


#endif