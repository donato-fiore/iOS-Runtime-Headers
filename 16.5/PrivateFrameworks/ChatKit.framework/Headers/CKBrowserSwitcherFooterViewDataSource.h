// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKBROWSERSWITCHERFOOTERVIEWDATASOURCE_H
#define CKBROWSERSWITCHERFOOTERVIEWDATASOURCE_H

@class NSString;
@protocol CKBrowserSwitcherFooterViewDataSource;

#import <Foundation/Foundation.h>


@interface CKBrowserSwitcherFooterViewDataSource : NSObject <CKBrowserSwitcherFooterViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)numberOfPluginsInSwitcherView:(id)arg0 forSection:(NSUInteger)arg1 ;
-(id)init;
-(id)pluginManager;
-(id)switcherView:(id)arg0 indexPathOfModelWithIdentifier:(id)arg1 ;
-(id)switcherView:(id)arg0 modelAtIndexPath:(id)arg1 type:(*NSInteger)arg2 ;


@end


#endif