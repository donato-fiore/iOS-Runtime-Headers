// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FSUUSERDEFAULTS_H
#define FSUUSERDEFAULTS_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>


@interface FSUUserDefaults : NSObject {
    NSUserDefaults *userDefault;
}




+(id)shared;
-(id)getUniqueDeviceId;
-(id)init;
-(id)lastUploadDate;
-(void)setLastUploadDate:(id)arg0 ;


@end


#endif