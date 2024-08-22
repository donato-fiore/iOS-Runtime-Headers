// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSHORTCUTPACKAGEFILE_H
#define WFSHORTCUTPACKAGEFILE_H

@class NSString, NSFileManager, NSData, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFShortcutPackageFile : NSObject

@property (readonly, nonatomic) NSString *directoryName;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *executionQueue; // ivar: _executionQueue
@property (readonly, nonatomic) NSFileManager *fileManager; // ivar: _fileManager
@property (readonly, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSString *sanitizedName; // ivar: _sanitizedName
@property (retain, nonatomic) NSData *shortcutData; // ivar: _shortcutData
@property (readonly, nonatomic) NSString *shortcutName; // ivar: _shortcutName
@property (retain, nonatomic) NSData *signedShortcutData; // ivar: _signedShortcutData
@property (readonly, nonatomic) NSURL *signedShortcutFileURL; // ivar: _signedShortcutFileURL
@property (readonly, nonatomic) NSURL *temporaryWorkingDirectoryURL; // ivar: _temporaryWorkingDirectoryURL


-(id)extractShortcutFileRepresentationWithError:(*id)arg0 ;
-(id)extractShortcutFileRepresentationWithSigningMethod:(*NSInteger)arg0 error:(*id)arg1 ;
-(id)extractShortcutFileRepresentationWithSigningMethod:(*NSInteger)arg0 iCloudIdentifier:(*id)arg1 error:(*id)arg2 ;
-(id)generateDirectoryStructureInDirectory:(id)arg0 error:(*id)arg1 ;
-(id)generateSignedShortcutFileRepresentationWithAccount:(id)arg0 error:(*id)arg1 ;
-(id)generateSignedShortcutFileRepresentationWithPrivateKey:(struct __SecKey *)arg0 signingContext:(id)arg1 error:(*id)arg2 ;
-(id)initWithShortcutData:(id)arg0 shortcutName:(id)arg1 ;
-(id)initWithSignedShortcutData:(id)arg0 shortcutName:(id)arg1 ;
-(id)initWithSignedShortcutFileURL:(id)arg0 ;
-(void)commonInit;
-(void)extractShortcutFileRepresentationWithCompletion:(id)arg0 ;
-(void)preformShortcutDataExtractionWithCompletion:(id)arg0 ;


@end


#endif