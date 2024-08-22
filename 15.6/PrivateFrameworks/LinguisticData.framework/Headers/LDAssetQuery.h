// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LDASSETQUERY_H
#define LDASSETQUERY_H

@class NSString, NSConditionLock;

#import <Foundation/Foundation.h>


@interface LDAssetQuery : NSObject {
    NSString *_language;
    NSConditionLock *_conditionLock;
    BOOL _hasCompleted;
    BOOL _waitTimedOut;
}


@property (readonly) BOOL hasCompleted;


-(BOOL)waitForCompletion;
-(id)initWithLanguage:(id)arg0 ;
-(void)_runInForeground:(BOOL)arg0 ;
-(void)dealloc;
-(void)runInBackground;
-(void)runInForeground;


@end


#endif