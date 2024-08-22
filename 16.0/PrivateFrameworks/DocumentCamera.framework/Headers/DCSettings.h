// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DCSETTINGS_H
#define DCSETTINGS_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>


@interface DCSettings : NSObject

@property (readonly, nonatomic) BOOL enableViewService;
@property (readonly, nonatomic) BOOL finishAfterFirstScan;
@property (readonly, nonatomic) BOOL useDocumentSegmentationRequest;
@property (retain) NSUserDefaults *userDefaults; // ivar: _userDefaults


+(id)sharedSettings;
-(id)init;


@end


#endif