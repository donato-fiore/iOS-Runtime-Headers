// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCOMPONENTINSERTIONRESULT_H
#define SXCOMPONENTINSERTIONRESULT_H

@protocol SXBlueprintMarker;

#import <Foundation/Foundation.h>

#import "SXComponentInsert.h"

@interface SXComponentInsertionResult : NSObject {
    SXComponentInsert *_insert;
    id<SXBlueprintMarker> *_marker;
}






@end


#endif