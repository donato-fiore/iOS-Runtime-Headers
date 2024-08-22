// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8VIDEOSUI23UNIFIEDMESSAGINGMANAGER_H
#define _TTC8VIDEOSUI23UNIFIEDMESSAGINGMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC8VideosUI23UnifiedMessagingManager : NSObject {
    ? engagement;
    ? accessQueue;
    ? fullorhalfSheetPromptedAt;
    ? amsURLParser;
    ? lastTabIdentifier;
    ? messageViewControllerRegistry;
}




-(id)getFullorHalfSheetPromptedAt;
-(id)init;
-(void)dealloc;
-(void)handleDidBecomeActive;
-(void)handleTabBarChange:(id)arg0 ;
-(void)markFullorHalfSheetPromptAt:(id)arg0 ;


@end


#endif