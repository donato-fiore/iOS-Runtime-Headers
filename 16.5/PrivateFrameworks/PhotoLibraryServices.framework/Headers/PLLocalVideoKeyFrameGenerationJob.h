// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLLOCALVIDEOKEYFRAMEGENERATIONJOB_H
#define PLLOCALVIDEOKEYFRAMEGENERATIONJOB_H

@class NSMutableArray, NSManagedObjectID, PLPhotoLibraryPathManagerIdentifier;

#import <Foundation/Foundation.h>


@interface PLLocalVideoKeyFrameGenerationJob : NSObject {
    os_unfair_lock_s _handlerLock;
    NSMutableArray *_completionHandlers;
}


@property (retain, nonatomic) NSManagedObjectID *assetObjectID; // ivar: _assetObjectID
@property (copy, nonatomic) PLPhotoLibraryPathManagerIdentifier *libraryID; // ivar: _libraryID
@property (nonatomic) BOOL networkAccessAllowed; // ivar: _networkAccessAllowed


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToJob:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(void)addCompletionHandler:(id)arg0 ;
-(void)callCompletionHandlersWithMutatedMoc:(id)arg0 error:(id)arg1 storedRecipes:(id)arg2 affectedRecipes:(id)arg3 sourceMetadata:(id)arg4 ;


@end


#endif