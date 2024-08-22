// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRTRASHITEM_H
#define BRTRASHITEM_H

@class NSNumber, NSDate, UTType, NSString, NSError, NSDictionary, NSFileProviderItemVersion, NSPersonNameComponents, NSData;
@protocol NSFileProviderItem;

#import <Foundation/Foundation.h>


@interface BRTrashItem : NSObject <NSFileProviderItem>



@property (readonly, nonatomic) NSUInteger capabilities;
@property (readonly, copy, nonatomic) NSNumber *childItemCount;
@property (readonly, copy, nonatomic) NSDate *contentModificationDate;
@property (readonly, nonatomic) NSInteger contentPolicy;
@property (readonly, copy, nonatomic) UTType *contentType;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSNumber *documentSize;
@property (readonly, nonatomic, getter=isDownloaded) BOOL downloaded;
@property (readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property (readonly, copy, nonatomic) NSError *downloadingError;
@property (readonly, nonatomic) NSDictionary *extendedAttributes;
@property (readonly, copy, nonatomic) NSNumber *favoriteRank;
@property (readonly, nonatomic) NSUInteger fileSystemFlags;
@property (readonly, copy, nonatomic) NSString *filename;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) NSFileProviderItemVersion *itemVersion;
@property (readonly, copy, nonatomic) NSDate *lastUsedDate;
@property (readonly, nonatomic) NSPersonNameComponents *mostRecentEditorNameComponents;
@property (readonly, nonatomic, getter=isMostRecentVersionDownloaded) BOOL mostRecentVersionDownloaded;
@property (readonly, nonatomic) NSPersonNameComponents *ownerNameComponents;
@property (readonly, copy, nonatomic) NSString *parentItemIdentifier;
@property (readonly, nonatomic, getter=isShared) BOOL shared;
@property (readonly, nonatomic, getter=isSharedByCurrentUser) BOOL sharedByCurrentUser;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *symlinkTargetPath;
@property (readonly, copy, nonatomic) NSData *tagData;
@property (readonly, nonatomic, getter=isTrashed) BOOL trashed;
@property (readonly, nonatomic) NSFileProviderTypeAndCreator typeAndCreator;
@property (readonly, copy, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic, getter=isUploaded) BOOL uploaded;
@property (readonly, nonatomic, getter=isUploading) BOOL uploading;
@property (readonly, copy, nonatomic) NSError *uploadingError;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) NSData *versionIdentifier;




@end


#endif