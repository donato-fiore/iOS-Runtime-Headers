// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKRECOGNITIONQUERYCONTROLLER_H
#define PKRECOGNITIONQUERYCONTROLLER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PKRecognitionSessionManager.h"

@interface PKRecognitionQueryController : NSObject {
    NSMutableDictionary *_drawingQueries;
    NSMutableDictionary *_visibleStrokeQueries;
    NSMutableDictionary *_queriesToCreate;
    NSMutableDictionary *_suffixes;
    PKRecognitionSessionManager *_recognitionManager;
}






@end


#endif