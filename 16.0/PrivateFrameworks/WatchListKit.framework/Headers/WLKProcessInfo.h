// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKPROCESSINFO_H
#define WLKPROCESSINFO_H


#import <Foundation/Foundation.h>


@interface WLKProcessInfo : NSObject

@property (nonatomic) *__SecTask currentTask; // ivar: _currentTask


+(id)currentProcessInfo;
-(BOOL)boolValueForEntitlement:(id)arg0 ;
-(BOOL)valueForEntitlement:(id)arg0 containsObject:(id)arg1 ;
-(id)init;
-(id)valueForEntitlement:(id)arg0 ;
-(void)dealloc;


@end


#endif