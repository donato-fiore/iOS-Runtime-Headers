// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSAPPLICATIONUNINSTALLOPTIONS_H
#define FBSAPPLICATIONUNINSTALLOPTIONS_H


#import <Foundation/Foundation.h>


@interface FBSApplicationUninstallOptions : NSObject

@property (nonatomic) BOOL showsArchiveOption; // ivar: _showsArchiveOption
@property (nonatomic, getter=isUserInitiated) BOOL userInitiated; // ivar: _userInitiated


+(id)userInitiated;


@end


#endif