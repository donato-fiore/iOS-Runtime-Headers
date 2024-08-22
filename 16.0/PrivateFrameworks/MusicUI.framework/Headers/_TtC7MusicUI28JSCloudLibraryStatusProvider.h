// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7MUSICUI28JSCLOUDLIBRARYSTATUSPROVIDER_H
#define _TTC7MUSICUI28JSCLOUDLIBRARYSTATUSPROVIDER_H

@class JSValue;
@protocol _TtP7MusicUIP33_1A7260440F3B78A53DEB4643004F3E8135JSCloudLibraryStatusProviderExports_;

#import <Foundation/Foundation.h>


@interface _TtC7MusicUI28JSCloudLibraryStatusProvider : NSObject <_TtP7MusicUIP33_1A7260440F3B78A53DEB4643004F3E8135JSCloudLibraryStatusProviderExports_>

 {
    ? cloudLibraryStatusController;
    ? objectGraph;
}


@property (nonatomic, readonly) JSValue *isCloudLibraryEnabled;
@property (nonatomic, readonly) JSValue *isCloudLibraryLoaded;


-(id)init;


@end


#endif