// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCUPNEXTDATASOURCESVIEWCONTROLLER_H
#define NTKCUPNEXTDATASOURCESVIEWCONTROLLER_H

@class PSListController, NSString;
@protocol NTKCUpNextDataSourcesManagerIdentifiersDelegate;


#import "NTKCUpNextDataSourcesManager.h"

@interface NTKCUpNextDataSourcesViewController : PSListController <NTKCUpNextDataSourcesManagerIdentifiersDelegate>

 {
    NTKCUpNextDataSourcesManager *_dataSourcesManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_dataSourceEnabled:(id)arg0 ;
-(id)init;
-(id)specifiers;
-(void)_disabledDataSourcesDidChange;
-(void)_setAndResizeIconImage:(id)arg0 forSpecifier:(id)arg1 ;
-(void)_setDataSourceEnabled:(id)arg0 withSpecifier:(id)arg1 ;
-(void)dealloc;
-(void)manager:(id)arg0 didUpdateDataSourceEntries:(id)arg1 ;


@end


#endif