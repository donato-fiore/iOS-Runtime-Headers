// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPFILETRANSFERITEM_H
#define RPFILETRANSFERITEM_H

@class NSError, NSData, NSString, NSURL, NSDictionary;

#import <Foundation/Foundation.h>


@interface RPFileTransferItem : NSObject

@property (nonatomic) BOOL completed; // ivar: _completed
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) NSUInteger estimatedSize; // ivar: _estimatedSize
@property (retain, nonatomic) NSData *fileData; // ivar: _fileData
@property (nonatomic) NSUInteger fileID; // ivar: _fileID
@property (nonatomic) NSInteger fileSize; // ivar: _fileSize
@property (copy, nonatomic) NSString *filename; // ivar: _filename
@property (copy, nonatomic) NSURL *itemURL; // ivar: _itemURL
@property (copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (nonatomic) NSUInteger metadataSize; // ivar: _metadataSize
@property (copy, nonatomic) NSData *sha256HashData; // ivar: _sha256HashData


-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;


@end


#endif