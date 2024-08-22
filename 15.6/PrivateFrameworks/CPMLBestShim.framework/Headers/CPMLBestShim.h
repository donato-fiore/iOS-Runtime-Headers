// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPMLBESTSHIM_H
#define CPMLBESTSHIM_H


#import <Foundation/Foundation.h>


@interface CPMLBestShim : NSObject



+(id)bestShim;
+(id)bestShimWithDBPath:(id)arg0 withModelPath:(id)arg1 withPListPath:(id)arg2 ;
-(id)rankItems:(id)arg0 withMetaInfo:(id)arg1 withNumOfRankItem:(NSUInteger)arg2 ;
-(void)feedback:(id)arg0 withItemsVisited:(id)arg1 ;


@end


#endif