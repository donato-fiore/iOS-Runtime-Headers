// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHSSNAPSHOTCONTEXT_H
#define CHSSNAPSHOTCONTEXT_H

@class NSFileManager, NSString, NSURL;

#import <Foundation/Foundation.h>

#import "CHSScreenshotPresentationAttributes.h"

@interface CHSSnapshotContext : NSObject {
    BOOL _usesCAPackage;
    BOOL _checkedContentType;
    BOOL _fileExists;
    BOOL _checkedFileExists;
    NSFileManager *_fileManager;
    os_unfair_lock_s _fileManagerLock;
}


@property (readonly, nonatomic) CHSScreenshotPresentationAttributes *attributes; // ivar: _attributes
@property (readonly, nonatomic) NSString *contentIdentifier;
@property (readonly, nonatomic) BOOL fileExists;
@property (readonly, nonatomic) BOOL needsCAPackage;
@property (readonly, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(id)initWithURL:(id)arg0 attributes:(id)arg1 fileManager:(id)arg2 ;


@end


#endif