// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPHOTOLIBRARYSHOULDRELOADNOTIFICATION_H
#define PLPHOTOLIBRARYSHOULDRELOADNOTIFICATION_H



#import "PLChangeNotification.h"
#import "PLPhotoLibrary.h"

@interface PLPhotoLibraryShouldReloadNotification : PLChangeNotification {
    PLPhotoLibrary *_photoLibrary;
}




-(id)initNotificationWithPhotoLibrary:(id)arg0 ;
-(id)name;
-(id)object;
-(id)userInfo;


@end


#endif