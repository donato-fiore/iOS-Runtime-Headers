// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLPREVIEWITEMEDITEDCOPY_H
#define QLPREVIEWITEMEDITEDCOPY_H

@class NSURL, FPSandboxingURLWrapper, NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface QLPreviewItemEditedCopy : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSURL *containerURL;
@property (retain, nonatomic) FPSandboxingURLWrapper *directoryURLWrapper; // ivar: _directoryURLWrapper
@property (retain, nonatomic) NSURL *editedCopyURL; // ivar: _editedCopyURL
@property (retain, nonatomic) FPSandboxingURLWrapper *editedCopyURLWrapper; // ivar: _editedCopyURLWrapper
@property (retain, nonatomic) NSURL *hostTemporaryContainerURL; // ivar: _hostTemporaryContainerURL
@property (readonly, nonatomic) NSString *outputURLContentType;
@property (nonatomic) BOOL temporaryDirectoryWasCreatedInHost; // ivar: _temporaryDirectoryWasCreatedInHost
@property (readonly, nonatomic) NSURL *url;
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (nonatomic) NSUInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)containerStillExists;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEditedCopyURL:(id)arg0 ;
-(id)initWithEditedCopyURL:(id)arg0 containerTemporaryURL:(id)arg1 temporaryDirectoryCreatedInHost:(BOOL)arg2 ;
-(id)initWithEditedCopyURL:(id)arg0 temporaryDirectoryCreatedInHost:(BOOL)arg1 ;
-(void)bumpVersion;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeFromDisk:(BOOL)arg0 ;


@end


#endif