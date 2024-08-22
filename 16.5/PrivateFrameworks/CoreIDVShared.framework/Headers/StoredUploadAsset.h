// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STOREDUPLOADASSET_H
#define STOREDUPLOADASSET_H

@class NSManagedObject, NSString;


#import "StoredProofingSession.h"

@interface StoredUploadAsset : NSManagedObject

@property (nonatomic, copy) NSString *assetFileURL;
@property (nonatomic, copy) NSString *assetType;
@property (nonatomic, retain) StoredProofingSession *proofingSession;
@property (nonatomic, copy) NSString *recordUUID;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif