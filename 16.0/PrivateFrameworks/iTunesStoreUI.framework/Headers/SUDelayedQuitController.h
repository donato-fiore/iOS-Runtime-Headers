// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUDELAYEDQUITCONTROLLER_H
#define SUDELAYEDQUITCONTROLLER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SUDelayedQuitController : NSObject {
    NSInteger _delayTerminateCount;
    NSMutableArray *_longLivedViewControllers;
}




+(BOOL)isDelayingTerminate;
+(BOOL)viewControllerIsLongLived:(id)arg0 ;
+(id)checkedInViewControllerOfClass:(Class)arg0 ;
+(id)sharedInstance;
+(void)beginDelayingTerminate;
+(void)checkInLongLivedViewController:(id)arg0 ;
+(void)checkOutLongLivedViewController:(id)arg0 ;
+(void)endDelayingTerminate;
-(BOOL)_isDelayingTerminate;
-(BOOL)_viewControllerIsLongLived:(id)arg0 ;
-(id)_checkedInViewControllerOfClass:(Class)arg0 ;
-(void)_beginDelayingTerminate;
-(void)_checkInLongLivedViewController:(id)arg0 ;
-(void)_checkOutLongLivedViewController:(id)arg0 ;
-(void)_endDelayingTerminate;
-(void)dealloc;


@end


#endif