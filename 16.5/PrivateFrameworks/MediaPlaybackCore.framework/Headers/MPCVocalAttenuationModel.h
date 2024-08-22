// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCVOCALATTENUATIONMODEL_H
#define MPCVOCALATTENUATIONMODEL_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface MPCVocalAttenuationModel : NSObject

@property (copy, nonatomic) NSString *basePath; // ivar: _basePath
@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (nonatomic) NSUInteger blockSize; // ivar: _blockSize
@property (copy, nonatomic) NSArray *files; // ivar: _files
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger lookaheadSize; // ivar: _lookaheadSize
@property (copy, nonatomic) NSString *plistPath; // ivar: _plistPath
@property (nonatomic) CGFloat processingDelay; // ivar: _processingDelay
@property (nonatomic) NSUInteger sampleRate; // ivar: _sampleRate
@property (nonatomic) NSUInteger taskIteration; // ivar: _taskIteration


+(id)_filePathsForModelAtURL:(id)arg0 error:(*id)arg1 ;
+(id)_plistForModelAtURL:(id)arg0 error:(*id)arg1 ;
-(id)description;


@end


#endif