// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IPFEATUREEXTRACTOR_H
#define IPFEATUREEXTRACTOR_H


#import <Foundation/Foundation.h>


@interface IPFeatureExtractor : NSObject



+(id)defaultExtractor;
-(id)featuresForTextString:(id)arg0 inMessageUnit:(id)arg1 context:(id)arg2 ;
-(id)queue;


@end


#endif