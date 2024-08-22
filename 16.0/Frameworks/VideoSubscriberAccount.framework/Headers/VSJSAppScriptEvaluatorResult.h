// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSJSAPPSCRIPTEVALUATORRESULT_H
#define VSJSAPPSCRIPTEVALUATORRESULT_H

@class NSError, NSString;

#import <Foundation/Foundation.h>


@interface VSJSAppScriptEvaluatorResult : NSObject

@property (retain, nonatomic) NSError *loadError; // ivar: _loadError
@property (nonatomic) BOOL loaded; // ivar: _loaded
@property (retain, nonatomic) NSString *url; // ivar: _url




@end


#endif