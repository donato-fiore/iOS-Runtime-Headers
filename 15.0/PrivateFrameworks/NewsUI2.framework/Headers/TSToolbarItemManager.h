// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTOOLBARITEMMANAGER_H
#define TSTOOLBARITEMMANAGER_H


#import <Foundation/Foundation.h>


@interface TSToolbarItemManager : NSObject {
    ? sceneProvider;
    ? toolbarManager;
}




-(id)init;
-(void)configure;
-(void)deconfigure;
-(void)removeSectionsMenu;
-(void)removeShareConfigurationFactory;
-(void)updateSectionsMenu:(id)arg0 ;
-(void)updateShareConfigurationFactory:(id)arg0 ;
-(void)updateTitleWithImage:(id)arg0 tooltip:(id)arg1 ;
-(void)updateTitleWithText:(id)arg0 ;


@end


#endif