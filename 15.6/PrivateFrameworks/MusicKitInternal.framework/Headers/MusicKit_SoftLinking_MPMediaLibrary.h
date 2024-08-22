// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUSICKIT_SOFTLINKING_MPMEDIALIBRARY_H
#define MUSICKIT_SOFTLINKING_MPMEDIALIBRARY_H

@class MPMediaLibrary;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPMediaLibrary : NSObject {
    MPMediaLibrary *_underlyingMediaLibrary;
}




+(id)libraryDidChangeNotificationName;
+(id)sharedLibrary;
-(id)_initWithUnderlyingMediaLibrary:(id)arg0 ;
-(void)_handlelibraryDidChangeNotification:(id)arg0 ;
-(void)beginGeneratingLibraryChangeNotifications;
-(void)dealloc;
-(void)endGeneratingLibraryChangeNotifications;


@end


#endif