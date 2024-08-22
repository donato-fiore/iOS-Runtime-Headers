// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWURLSESSIONMULTIPARTPARSER_H
#define NWURLSESSIONMULTIPARTPARSER_H

@class NSString, NSMutableDictionary;
@protocol NWURLSessionResponseConsumer, OS_dispatch_data, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NWURLSessionMultipartBoundaryRecognizer.h"
#import "NWURLSessionMultipartHeaderRecognizer.h"

@interface NWURLSessionMultipartParser : NSObject {
    BOOL _isFirstBoundary;
    int _parserState;
    NSString *_boundary;
    id<NWURLSessionResponseConsumer> *_responseConsumer;
    NSObject<OS_dispatch_data> *_data;
    NWURLSessionMultipartBoundaryRecognizer *_boundaryRecognizer;
    NWURLSessionMultipartBoundaryRecognizer *_closeDelimiterRecognizer;
    NWURLSessionMultipartHeaderRecognizer *_headerRecognizer;
    NSMutableDictionary *_headers;
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _boundaryPatternSize;
    NSUInteger _closeDelimiterPatternSize;
}






@end


#endif