// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPCONFIGSTORE_H
#define PPCONFIGSTORE_H


#import <Foundation/Foundation.h>


@interface PPConfigStore : NSObject



+(id)defaultStore;
-(NSUInteger)assetVersionWithError:(*id)arg0 ;
-(id)readableTrialTreatmentsMappingWithError:(*id)arg0 ;
-(id)variantNameWithError:(*id)arg0 ;


@end


#endif