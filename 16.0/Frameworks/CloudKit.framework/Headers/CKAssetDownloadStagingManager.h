// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKASSETDOWNLOADSTAGINGMANAGER_H
#define CKASSETDOWNLOADSTAGINGMANAGER_H

@class NSString, NSURL, NSMutableDictionary;
@protocol CKPropertiesDescription;

#import <Foundation/Foundation.h>


@interface CKAssetDownloadStagingManager : NSObject <CKPropertiesDescription>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSURL *directory; // ivar: _directory
@property (retain, nonatomic) NSMutableDictionary *fileHandlesForInflightLastPathComponent; // ivar: _fileHandlesForInflightLastPathComponent
@property (retain, nonatomic) NSString *fileProtectionType; // ivar: _fileProtectionType
@property (readonly, nonatomic) NSURL *finishedDownloadDirectory; // ivar: _finishedDownloadDirectory
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSURL *inflightDownloadDirectory; // ivar: _inflightDownloadDirectory
@property (nonatomic) BOOL keepInflightFilesOpen;
@property (readonly) Class superclass;


-(BOOL)finishWithAssetDownloadStagingInfo:(id)arg0 fileURL:(*id)arg1 fileHandle:(*id)arg2 error:(*id)arg3 ;
-(BOOL)openWithAssetDownloadStagingInfo:(id)arg0 fileDescriptor:(*int)arg1 closeOnDealloc:(*BOOL)arg2 error:(*id)arg3 ;
-(id)finishedURLWithInfo:(id)arg0 ;
-(id)inflightLastPathComponentWithInfo:(id)arg0 ;
-(id)inflightURLWithLastPathComponent:(id)arg0 ;
-(id)initWithDirectory:(id)arg0 ;
-(id)redactedDescription;
-(void)CKDescribePropertiesUsing:(id)arg0 ;


@end


#endif