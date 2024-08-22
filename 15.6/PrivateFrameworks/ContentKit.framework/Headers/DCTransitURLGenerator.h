// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DCTRANSITURLGENERATOR_H
#define DCTRANSITURLGENERATOR_H



#import "DCMapsURLGenerator.h"

@interface DCTransitURLGenerator : DCMapsURLGenerator



-(id)host;
-(id)path;
-(id)scheme;
-(void)populateQueryDictionary;


@end


#endif