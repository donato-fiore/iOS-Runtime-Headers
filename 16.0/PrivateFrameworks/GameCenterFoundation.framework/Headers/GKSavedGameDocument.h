// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKSAVEDGAMEDOCUMENT_H
#define GKSAVEDGAMEDOCUMENT_H

@class NSString, NSURL, NSFileVersion, NSDate, NSSet, NSOperationQueue;
@protocol NSFilePresenter;

#import <Foundation/Foundation.h>


@interface GKSavedGameDocument : NSObject <NSFilePresenter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (retain, nonatomic) NSFileVersion *fileVersion; // ivar: _fileVersion
@property (nonatomic) BOOL hasConflict; // ivar: _hasConflict
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isConflictVersion; // ivar: _isConflictVersion
@property (retain, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;


+(id)currentDeviceName;
-(id)initWithFileURL:(id)arg0 ;
-(id)metadata;
-(void)dealloc;
-(void)deleteAllVersionsIncludingCurrent:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)deleteConflictVersion:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(id)arg0 ;
-(void)loadMetadataWithCompletionHandler:(id)arg0 ;
-(void)loadWrapperDataWithFilename:(id)arg0 completionHandler:(id)arg1 ;
-(void)presentedItemDidChange;
-(void)presentedItemDidGainVersion:(id)arg0 ;
-(void)presentedItemDidLoseVersion:(id)arg0 ;
-(void)presentedItemDidResolveConflictVersion:(id)arg0 ;
-(void)saveData:(id)arg0 completionHandler:(id)arg1 ;
-(void)setMetadata:(id)arg0 ;
-(void)updateConflictStateWithCompletionHandler:(id)arg0 ;
-(void)updateMetadata;


@end


#endif