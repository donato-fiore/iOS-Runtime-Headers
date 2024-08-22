// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMUSERDATADISPOSITIONMANAGER_H
#define DMUSERDATADISPOSITIONMANAGER_H


#import <Foundation/Foundation.h>


@interface DMUserDataDispositionManager : NSObject



+(id)descriptionFromDispositionFlags:(unsigned int)arg0 ;
+(unsigned int)backupSourceDispositionFlagsFromDispositionFlags:(unsigned int)arg0 ;
+(unsigned int)basicDispositionFlagsFromDispositionFlags:(unsigned int)arg0 ;
+(unsigned int)dispositionFlagsFromDispositionDict:(id)arg0 ;


@end


#endif