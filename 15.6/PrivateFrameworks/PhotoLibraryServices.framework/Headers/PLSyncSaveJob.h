// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLSYNCSAVEJOB_H
#define PLSYNCSAVEJOB_H

@class NSSet, NSDate, NSArray, CLLocation, NSURL, NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface PLSyncSaveJob : NSObject

@property (copy, nonatomic) NSSet *albumURIs; // ivar: albumURIs
@property (copy, nonatomic) NSDate *cleanupBeforeDate; // ivar: _cleanupBeforeDate
@property (nonatomic) BOOL cleanupSyncState; // ivar: _cleanupSyncState
@property (copy, nonatomic) NSDate *creationDate; // ivar: creationDate
@property (retain, nonatomic) NSArray *facesInfo; // ivar: facesInfo
@property (copy, nonatomic) id *finishedBlock; // ivar: _finishedBlock
@property (nonatomic) BOOL hasVideoComplement; // ivar: hasVideoComplement
@property (nonatomic) BOOL isSyncComplete; // ivar: isSyncComplete
@property (nonatomic) BOOL isVideo; // ivar: isVideo
@property (copy, nonatomic) CLLocation *location; // ivar: location
@property (copy, nonatomic) NSDate *modificationDate; // ivar: modificationDate
@property (retain, nonatomic) NSURL *originalAssetURL; // ivar: originalAssetURL
@property (retain, nonatomic) NSString *originalFileName; // ivar: originalFileName
@property (retain, nonatomic) NSNumber *sortToken; // ivar: sortToken
@property (copy, nonatomic) NSString *uuid; // ivar: uuid
@property (retain, nonatomic) NSURL *videoComplementURL; // ivar: videoComplementURL


-(id)description;
-(id)initFromSerializedData:(id)arg0 ;
-(id)serializedData;
-(void)processFacesWithBlock:(id)arg0 ;


@end


#endif