// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSTRINGMETRICS_H
#define SBSTRINGMETRICS_H

@class NSMutableArray;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface SBStringMetrics : NSObject <NSFastEnumeration>

 {
    NSMutableArray *_fragments;
}




-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)fragmentCount;
-(id)description;
-(id)fragments;
-(id)init;
-(void)addFragment:(id)arg0 ;


@end


#endif