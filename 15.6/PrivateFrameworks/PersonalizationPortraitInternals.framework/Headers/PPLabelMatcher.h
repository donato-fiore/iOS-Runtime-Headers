// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPLABELMATCHER_H
#define PPLABELMATCHER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PPLabelMatcher : NSObject {
    NSDictionary *_map;
}




+(id)sharedInstance;
-(NSUInteger)matchFromLabel:(id)arg0 toLabel:(id)arg1 ;
-(id)_generateMap;
-(id)init;


@end


#endif