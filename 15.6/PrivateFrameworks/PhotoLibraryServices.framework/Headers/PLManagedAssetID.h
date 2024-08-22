// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLMANAGEDASSETID_H
#define PLMANAGEDASSETID_H

@class NSString, PLPhotoLibraryPathManagerIdentifier;
@protocol PLAssetID;

#import <Foundation/Foundation.h>


@interface PLManagedAssetID : NSObject <PLAssetID>



@property (nonatomic) unsigned short bundleScope; // ivar: _bundleScope
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *directory; // ivar: _directory
@property (copy, nonatomic) NSString *filename; // ivar: _filename
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) PLPhotoLibraryPathManagerIdentifier *libraryID; // ivar: _libraryID
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *uuid; // ivar: _uuid


-(id)initWithManagedAsset:(id)arg0 ;
-(id)initWithUUID:(id)arg0 filename:(id)arg1 directory:(id)arg2 libraryID:(id)arg3 bundleScope:(unsigned short)arg4 ;


@end


#endif