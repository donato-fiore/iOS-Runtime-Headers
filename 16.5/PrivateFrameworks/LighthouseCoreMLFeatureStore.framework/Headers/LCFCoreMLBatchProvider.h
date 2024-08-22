// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LCFCOREMLBATCHPROVIDER_H
#define LCFCOREMLBATCHPROVIDER_H

@class NSArray;
@protocol MLBatchProvider;

#import <Foundation/Foundation.h>


@interface LCFCoreMLBatchProvider : NSObject <MLBatchProvider>



@property (readonly, nonatomic) NSInteger count; // ivar: _count
@property (readonly, nonatomic) NSArray *featureProviders; // ivar: _featureProviders


-(id)featuresAtIndex:(NSInteger)arg0 ;
-(id)init:(id)arg0 ;


@end


#endif