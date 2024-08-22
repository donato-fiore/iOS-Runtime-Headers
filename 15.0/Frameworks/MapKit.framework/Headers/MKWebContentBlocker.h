// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKWEBCONTENTBLOCKER_H
#define MKWEBCONTENTBLOCKER_H

@class NSCache;

#import <Foundation/Foundation.h>


@interface MKWebContentBlocker : NSObject {
    NSCache *_regularExpressionCache;
}




+(id)sharedBlocker;
-(BOOL)shouldBlockLoadingOfURL:(id)arg0 ;
-(id)_regularExpression;


@end


#endif