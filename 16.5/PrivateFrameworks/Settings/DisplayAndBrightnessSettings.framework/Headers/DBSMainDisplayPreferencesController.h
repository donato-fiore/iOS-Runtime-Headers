// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBSMAINDISPLAYPREFERENCESCONTROLLER_H
#define DBSMAINDISPLAYPREFERENCESCONTROLLER_H

@class PSListController, NSString;
@protocol DBSZoomAndProSpecifiersDelegate;


#import "DBSZoomAndProSpecifiers.h"

@interface DBSMainDisplayPreferencesController : PSListController <DBSZoomAndProSpecifiersDelegate>

 {
    BOOL _isProMode;
}


@property (retain, nonatomic) DBSZoomAndProSpecifiers *_zoomAndProSpecifierVendor; // ivar: __zoomAndProSpecifierVendor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)proModeSupported;
-(id)getProModeEnabled;
-(id)init;
-(id)specifiers;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)presentModalFineTuneController;
-(void)presentModalMagnifyController;
-(void)setProModeEnabled:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif