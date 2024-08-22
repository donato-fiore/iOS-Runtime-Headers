// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUIKCONFERENCEUTILS_H
#define CUIKCONFERENCEUTILS_H


#import <Foundation/Foundation.h>


@interface CUIKConferenceUtils : NSObject



+(NSUInteger)_buttonTypeForApplicationRecord:(id)arg0 URL:(id)arg1 isBroadcast:(BOOL)arg2 ;
+(id)_imageForApplicationRecord:(id)arg0 URL:(id)arg1 isBroadcast:(BOOL)arg2 ;
+(id)_platformImageForISIcon:(id)arg0 ;
+(id)_prepareImageForDefaultDescriptor:(id)arg0 ;
+(id)_systemImageNamed:(id)arg0 ;
+(id)_titleForApplicationRecord:(id)arg0 URL:(id)arg1 ;
+(id)_workQueue;
+(id)logHandle;
+(id)subtitleForURL:(id)arg0 displayedWithTitle:(id)arg1 ;
+(id)subtitleForVirtualConference:(id)arg0 displayedWithTitle:(id)arg1 ;
+(id)synchronousOutlineIconForURL:(id)arg0 outImageName:(*id)arg1 ;
+(id)synchronousTitleForURL:(id)arg0 ;
+(void)_displayDetailsForURL:(id)arg0 isBroadcast:(BOOL)arg1 completionHandler:(id)arg2 ;
+(void)displayDetailsForJoinMethod:(id)arg0 completionHandler:(id)arg1 ;
+(void)displayDetailsForURL:(id)arg0 completionHandler:(id)arg1 ;
+(void)imageForRoomType:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif