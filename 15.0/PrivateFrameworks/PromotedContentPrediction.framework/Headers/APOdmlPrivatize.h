// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APODMLPRIVATIZE_H
#define APODMLPRIVATIZE_H


#import <Foundation/Foundation.h>


@interface APOdmlPrivatize : NSObject



-(BOOL)_addNoise:(*float)arg0 resultsCount:(NSUInteger)arg1 maxNorm:(CGFloat)arg2 normBinCount:(unsigned int)arg3 ;
-(void)addPrivatization:(id)arg0 recipe:(id)arg1 completion:(id)arg2 ;


@end


#endif