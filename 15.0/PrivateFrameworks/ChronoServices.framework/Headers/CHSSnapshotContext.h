// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHSSNAPSHOTCONTEXT_H
#define CHSSNAPSHOTCONTEXT_H

@class NSFileManager, NSString, NSURL;

#import <Foundation/Foundation.h>


@interface CHSSnapshotContext : NSObject {
    BOOL _usesCAPackage;
    BOOL _checkedContentType;
    NSFileManager *_fileManager;
    BOOL _fileExists;
    BOOL _checkedFileExists;
}


@property (readonly, nonatomic) NSInteger colorScheme; // ivar: _colorScheme
@property (readonly, nonatomic) NSString *contentIdentifier;
@property (readonly, nonatomic) BOOL fileExists;
@property (readonly, nonatomic) BOOL needsCAPackage;
@property (readonly, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) NSURL *url; // ivar: _url




@end


#endif