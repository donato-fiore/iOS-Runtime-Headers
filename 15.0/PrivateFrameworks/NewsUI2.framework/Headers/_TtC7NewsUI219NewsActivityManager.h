// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC7NEWSUI219NEWSACTIVITYMANAGER_H
#define _TTC7NEWSUI219NEWSACTIVITYMANAGER_H

@protocol TSNewsActivityManagerType;

#import <Foundation/Foundation.h>


@interface _TtC7NewsUI219NewsActivityManager : NSObject <TSNewsActivityManagerType>

 {
    ? newsUserActivityManager;
}




-(id)init;
-(void)deregisterActivityWithData:(id)arg0 ;
-(void)registerCurrentActivityWithData:(id)arg0 ;


@end


#endif