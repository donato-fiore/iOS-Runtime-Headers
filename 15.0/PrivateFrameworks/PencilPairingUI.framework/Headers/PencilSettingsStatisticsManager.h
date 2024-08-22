// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PENCILSETTINGSSTATISTICSMANAGER_H
#define PENCILSETTINGSSTATISTICSMANAGER_H


#import <Foundation/Foundation.h>


@interface PencilSettingsStatisticsManager : NSObject



+(id)sharedInstance;
-(id)stringForElementType:(NSInteger)arg0 ;
-(void)recordDrawPencilForTextInputToggle:(BOOL)arg0 ;
-(void)recordEducationPanelChanged:(NSInteger)arg0 ;
-(void)recordEducationPencilDidShow:(CGFloat)arg0 ;
-(void)recordEducationPencilInputInteraction:(NSInteger)arg0 ;
-(void)recordOnlyUsePencilToggle:(BOOL)arg0 ;
-(void)recordPaperFromCornerToggle:(BOOL)arg0 ;
-(void)recordScreenshotFromCornerToggle:(BOOL)arg0 ;
-(void)recordSetPencilPerferredAction:(NSInteger)arg0 ;


@end


#endif