// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BPSAPPGLANCEMANAGER_H
#define BPSAPPGLANCEMANAGER_H

@class PSListController;

#import <Foundation/Foundation.h>


@interface BPSAppGlanceManager : NSObject

@property (weak, nonatomic) PSListController *listControllerDelegate; // ivar: _listControllerDelegate


-(id)glanceSpecifierForIdentifier:(id)arg0 ;
-(id)showsGlance:(id)arg0 ;
-(void)_logGlanceDescriptions;
-(void)loadSettings;
-(void)setShowsGlance:(id)arg0 forSpecifier:(id)arg1 ;


@end


#endif