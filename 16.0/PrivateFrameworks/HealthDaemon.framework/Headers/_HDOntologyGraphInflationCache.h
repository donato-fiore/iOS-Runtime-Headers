// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HDONTOLOGYGRAPHINFLATIONCACHE_H
#define _HDONTOLOGYGRAPHINFLATIONCACHE_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface _HDOntologyGraphInflationCache : NSObject {
    NSMutableDictionary *_conceptsByID;
    NSMutableArray *_conceptIDStack;
}




-(id)init;


@end


#endif