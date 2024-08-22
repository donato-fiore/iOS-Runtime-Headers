// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REELEMENTARCHIVER_H
#define REELEMENTARCHIVER_H


#import <Foundation/Foundation.h>

#import "RERelevanceEngine.h"

@interface REElementArchiver : NSObject {
    RERelevanceEngine *_engine;
}




-(id)_supportedClasses;
-(id)dataWithElement:(id)arg0 ;
-(id)elementWithData:(id)arg0 ;
-(id)initWithEngine:(id)arg0 ;


@end


#endif