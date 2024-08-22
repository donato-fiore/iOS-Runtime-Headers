// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSLPRFSTINGSYSTEMSETTINGS_H
#define CSLPRFSTINGSYSTEMSETTINGS_H

@class NSString;
@protocol CSLPRFTwoWaySyncSettingDelegate;

#import <Foundation/Foundation.h>

#import "CSLPRFTwoWaySyncSetting.h"

@interface CSLPRFStingSystemSettings : NSObject <CSLPRFTwoWaySyncSettingDelegate>

 {
    CSLPRFTwoWaySyncSetting *_stingSystemSettings;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSLPRFTwoWaySyncSettingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)read;
-(void)twoWaySyncSettingDidUpdate:(id)arg0 ;
-(void)write:(id)arg0 ;


@end


#endif