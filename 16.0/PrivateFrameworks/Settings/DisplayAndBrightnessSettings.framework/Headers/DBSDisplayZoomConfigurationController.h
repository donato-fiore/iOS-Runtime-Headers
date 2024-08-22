// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSDISPLAYZOOMCONFIGURATIONCONTROLLER_H
#define DBSDISPLAYZOOMCONFIGURATIONCONTROLLER_H


#import <Foundation/Foundation.h>


@interface DBSDisplayZoomConfigurationController : NSObject



+(id)defaultController;
-(id)currentDisplayZoomMode;
-(id)displayZoomModes;
-(void)setDisplayZoomMode:(id)arg0 withRelaunchURL:(id)arg1 ;


@end


#endif