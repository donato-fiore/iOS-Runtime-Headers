// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBSOFTWAKEDISPLAYDELEGATE_H
#define CBSOFTWAKEDISPLAYDELEGATE_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface CBSoftWakeDisplayDelegate : NSObject {
    NSObject<OS_os_log> *_logHandle;
    NSInteger _state;
    __DisplayFactorFade _fade;
}


@property (readonly, nonatomic) *__DisplayFactorFade fade;


+(BOOL)isSupported;
-(BOOL)isActive;
-(NSInteger)action:(NSInteger)arg0 ;
-(NSInteger)setFactor:(float)arg0 withFade:(float)arg1 ;
-(id)init;
-(void)dealloc;


@end


#endif