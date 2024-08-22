// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHFOLDERSETTINGS_H
#define SBHFOLDERSETTINGS_H

@class PTSettings;



@interface SBHFolderSettings : PTSettings

@property (nonatomic) BOOL allowNestedFolders; // ivar: _allowNestedFolders
@property (nonatomic) BOOL animatesPageScrubbing; // ivar: _animatesPageScrubbing
@property (nonatomic) CGFloat minPinchScale; // ivar: _minPinchScale
@property (nonatomic) BOOL pinchToClose; // ivar: _pinchToClose


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif