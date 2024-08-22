// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPTPCONVERSIONRESULT_H
#define PLPTPCONVERSIONRESULT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PLPTPConversionResult : NSObject

@property (readonly) NSUInteger estimatedFileLength; // ivar: _estimatedFileLength
@property (readonly, copy) NSString *pathExtension; // ivar: _pathExtension


-(id)initWithPathExtension:(id)arg0 estimatedFileLength:(NSUInteger)arg1 ;


@end


#endif