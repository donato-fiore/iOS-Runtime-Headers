// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RKLINGUISTICDATAPROVIDER_H
#define RKLINGUISTICDATAPROVIDER_H

@class NSMutableDictionary;
@protocol RKPolarityDataProvider;

#import <Foundation/Foundation.h>


@interface RKLinguisticDataProvider : NSObject <RKPolarityDataProvider>



@property (retain) NSMutableDictionary *polarityMapsByLanguageID; // ivar: _polarityMapsByLanguageID


-(id)init;


@end


#endif