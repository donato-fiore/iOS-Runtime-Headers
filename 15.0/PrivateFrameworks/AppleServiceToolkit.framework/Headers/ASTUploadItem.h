// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASTUPLOADITEM_H
#define ASTUPLOADITEM_H

@class NSURL, NSMutableDictionary, NSURLSessionUploadTask;

#import <Foundation/Foundation.h>


@interface ASTUploadItem : NSObject

@property (retain) NSObject *dataObject; // ivar: _dataObject
@property (retain) NSURL *destinationUrl; // ivar: _destinationUrl
@property BOOL isComplete; // ivar: _isComplete
@property BOOL isFailed; // ivar: _isFailed
@property (retain) NSMutableDictionary *metaInfo; // ivar: _metaInfo
@property (weak) NSURLSessionUploadTask *task; // ivar: _task


-(id)initWithDestinationUrl:(id)arg0 andSourceData:(id)arg1 andTask:(id)arg2 ;
-(id)initWithDestinationUrl:(id)arg0 andSourceUrl:(id)arg1 andTask:(id)arg2 ;


@end


#endif