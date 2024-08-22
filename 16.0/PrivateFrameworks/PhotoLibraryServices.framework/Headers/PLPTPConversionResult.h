// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPTPCONVERSIONRESULT_H
#define PLPTPCONVERSIONRESULT_H

@class UTType, NSString;

#import <Foundation/Foundation.h>


@interface PLPTPConversionResult : NSObject

@property (readonly) NSUInteger estimatedFileLength; // ivar: _estimatedFileLength
@property (readonly) UTType *inputContentType; // ivar: _inputContentType
@property (readonly) unsigned int inputVideoCodec; // ivar: _inputVideoCodec
@property (readonly) UTType *outputContentType; // ivar: _outputContentType
@property (readonly) unsigned int outputVideoCodec; // ivar: _outputVideoCodec
@property (readonly, copy) NSString *pathExtension; // ivar: _pathExtension
@property (readonly) BOOL requiresConversion; // ivar: _requiresConversion


-(id)description;
-(id)initWithRequiresConversion:(BOOL)arg0 pathExtension:(id)arg1 estimatedFileLength:(NSUInteger)arg2 inputVideoCodec:(unsigned int)arg3 inputContentType:(id)arg4 outputVideoCodec:(unsigned int)arg5 outputContentType:(id)arg6 ;


@end


#endif