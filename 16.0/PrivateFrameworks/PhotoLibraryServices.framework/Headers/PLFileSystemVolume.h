// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLFILESYSTEMVOLUME_H
#define PLFILESYSTEMVOLUME_H

@class NSURL, NSString, NSSet;


#import "PLManagedObject.h"

@interface PLFileSystemVolume : PLManagedObject {
    NSURL *_url;
}


@property (readonly, nonatomic) BOOL isOffline;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *resources;
@property (copy, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *volumeUuidString;


+(id)entityName;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg0 ;
+(id)predictedURLForVolumeName:(id)arg0 ;
+(id)volumeForObjectUUID:(id)arg0 context:(id)arg1 ;
+(id)volumeForURL:(id)arg0 context:(id)arg1 ;
+(id)volumeForVolumeUUID:(id)arg0 context:(id)arg1 ;
-(BOOL)supportsCloudUpload;
-(id)payloadForChangedKeys:(id)arg0 ;
-(id)payloadID;
-(id)payloadIDForTombstone:(id)arg0 ;
-(id)predictedURL;
-(void)_registerWithVolumeManager;
-(void)_unregisterWithVolumeManager;
-(void)awakeFromFetch;
-(void)awakeFromInsert;
-(void)didTurnIntoFault;
-(void)unregisterWithVolumeManager;
-(void)willTurnIntoFault;


@end


#endif