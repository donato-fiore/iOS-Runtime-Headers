// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLLOCALVIDEOKEYFRAMEGENERATIONJOB_H
#define PLLOCALVIDEOKEYFRAMEGENERATIONJOB_H

@class NSManagedObjectID, PLPhotoLibraryPathManagerIdentifier;

#import <Foundation/Foundation.h>


@interface PLLocalVideoKeyFrameGenerationJob : NSObject

@property (retain, nonatomic) NSManagedObjectID *assetObjectID; // ivar: _assetObjectID
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) PLPhotoLibraryPathManagerIdentifier *libraryID; // ivar: _libraryID
@property (nonatomic) BOOL networkAccessAllowed; // ivar: _networkAccessAllowed


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToJob:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif