// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHCHANGEVALIDATIONCONTROLLER_H
#define PHCHANGEVALIDATIONCONTROLLER_H

@class NSArray, NSString, NSOrderedSet, NSManagedObjectContext, PLPhotoLibrary;

#import <Foundation/Foundation.h>


@interface PHChangeValidationController : NSObject {
    BOOL _didPrepare;
}


@property (readonly, nonatomic) NSArray *albumsToDelete; // ivar: _albumsToDelete
@property (readonly, nonatomic) NSArray *assetsToChangeContent; // ivar: _assetsToChangeContent
@property (readonly, nonatomic) NSArray *assetsToDelete; // ivar: _assetsToDelete
@property (readonly, nonatomic) NSArray *assetsToHide; // ivar: _assetsToHide
@property (readonly, nonatomic) NSArray *assetsToRevert; // ivar: _assetsToRevert
@property (readonly, copy, nonatomic) NSString *clientName; // ivar: _clientName
@property (readonly, nonatomic) BOOL confirmationRequired; // ivar: _confirmationRequired
@property (readonly, nonatomic) NSOrderedSet *deleteRequests; // ivar: _deleteRequests
@property (readonly, nonatomic) NSArray *foldersToDelete; // ivar: _foldersToDelete
@property (readonly, nonatomic) NSOrderedSet *insertRequests; // ivar: _insertRequests
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) NSArray *renderedContentURLs; // ivar: _renderedContentURLs
@property (readonly, nonatomic) NSOrderedSet *updateRequests; // ivar: _updateRequests


-(BOOL)_prepareWithError:(*id)arg0 ;
-(BOOL)_promptForUserConfirmationWithTitle:(id)arg0 message:(id)arg1 defaultButtonTitle:(id)arg2 alternateButtonTitle:(id)arg3 extensionItem:(id)arg4 ;
-(BOOL)_recordObjectID:(id)arg0 withSimpleDeleteValidators:(id)arg1 ;
-(BOOL)_validateSimpleDeletionsWithValidators:(id)arg0 requestsByObjectID:(id)arg1 error:(*id)arg2 ;
-(BOOL)promptForUserConfirmationWithTitle:(id)arg0 message:(id)arg1 defaultButtonTitle:(id)arg2 alternateButtonTitle:(id)arg3 ;
-(BOOL)promptForUserConfirmationWithTitle:(id)arg0 message:(id)arg1 defaultButtonTitle:(id)arg2 alternateButtonTitle:(id)arg3 previewAssetLocalIdentifiers:(id)arg4 revertToOriginal:(BOOL)arg5 ;
-(BOOL)promptForUserConfirmationWithTitle:(id)arg0 message:(id)arg1 defaultButtonTitle:(id)arg2 alternateButtonTitle:(id)arg3 renderedContentURLs:(id)arg4 ;
-(BOOL)validateWithError:(*id)arg0 ;
-(id)_simpleDeleteValidatorsWithManagedObjectContext:(id)arg0 ;
-(id)initWithInsertRequests:(id)arg0 updateRequests:(id)arg1 deleteRequests:(id)arg2 context:(id)arg3 photoLibrary:(id)arg4 ;


@end


#endif