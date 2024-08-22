// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTFILETRANSFERRECORD_H
#define DTFILETRANSFERRECORD_H

@class NSURL, NSFileHandle;

#import <Foundation/Foundation.h>


@interface DTFileTransferRecord : NSObject

@property (retain, nonatomic) NSURL *destinationDirectoryURLToRemoveOnDealloc; // ivar: _destinationDirectoryURLToRemoveOnDealloc
@property (retain, nonatomic) NSURL *destinationURL; // ivar: _destinationURL
@property (readonly, nonatomic) BOOL isTransferOpen;
@property (retain, nonatomic) NSFileHandle *writeHandle; // ivar: _writeHandle


-(void)closeFileTransfer;
-(void)dealloc;


@end


#endif