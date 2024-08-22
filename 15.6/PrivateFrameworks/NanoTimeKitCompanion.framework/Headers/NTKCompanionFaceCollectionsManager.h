// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCOMPANIONFACECOLLECTIONSMANAGER_H
#define NTKCOMPANIONFACECOLLECTIONSMANAGER_H

@class NSUUID, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface NTKCompanionFaceCollectionsManager : NSObject {
    NSUUID *_activeDeviceUUID;
    NSMutableDictionary *_faceCollectionsForCollectionIdentifier;
    int _pairedDeviceVersionChangeNotificationToken;
}




+(id)sharedInstance;
-(id)init;
-(id)sharedFaceCollectionForDevice:(id)arg0 forCollectionIdentifier:(id)arg1 ;
-(id)sharedLibraryFaceCollectionsForAllDevices;
-(void)dealloc;


@end


#endif