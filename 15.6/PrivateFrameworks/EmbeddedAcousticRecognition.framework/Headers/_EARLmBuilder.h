// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EARLMBUILDER_H
#define _EARLMBUILDER_H


#import <Foundation/Foundation.h>


@interface _EARLmBuilder : NSObject



+(id)buildLmWithConfig:(id)arg0 root:(id)arg1 data:(id)arg2 dir:(id)arg3 shouldStop:(id)arg4 ;
+(id)generateNgramCountsWithConfig:(id)arg0 root:(id)arg1 data:(id)arg2 ;
+(id)loadLmFromDir:(id)arg0 ;
+(void)removeLmDir:(id)arg0 ;


@end


#endif