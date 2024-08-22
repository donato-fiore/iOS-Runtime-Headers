// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVPROCESSINFO_H
#define _TVPROCESSINFO_H


#import <Foundation/Foundation.h>


@interface _TVProcessInfo : NSObject

@property (nonatomic) *__SecTask currentTask; // ivar: _currentTask
@property (readonly, nonatomic) BOOL hasPrivateEntitlement; // ivar: _hasPrivateEntitlement
@property (readonly, nonatomic) BOOL hasiTunesAPIEntitlement; // ivar: _hasiTunesAPIEntitlement
@property (readonly, nonatomic) BOOL hasiTunesStoreEntitlement; // ivar: _hasiTunesStoreEntitlement


+(id)currentProcessInfo;
-(BOOL)boolValueForEntitlement:(id)arg0 ;
-(BOOL)valueForEntitlement:(id)arg0 containsObject:(id)arg1 ;
-(id)init;
-(id)valueForEntitlement:(id)arg0 ;
-(void)dealloc;


@end


#endif