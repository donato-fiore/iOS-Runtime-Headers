// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKUNZIPOPERATION_H
#define CRKUNZIPOPERATION_H

@class CATOperation, NSURL, NSError;



@interface CRKUnzipOperation : CATOperation

@property *_BOMCopier copier; // ivar: _copier
@property (readonly, nonatomic) NSURL *destinationDirectoryURL; // ivar: _destinationDirectoryURL
@property (retain, nonatomic) NSError *stashedError; // ivar: _stashedError
@property (readonly, nonatomic) NSURL *zipFileURL; // ivar: _zipFileURL


+(id)errorFromBOMCopierStatus:(int)arg0 message:(id)arg1 ;
-(id)initWithZipFileURL:(id)arg0 ;
-(id)initWithZipFileURL:(id)arg0 destinationDirectoryURL:(id)arg1 ;
-(void)cancel;
-(void)main;
-(void)operationWillFinish;


@end


#endif