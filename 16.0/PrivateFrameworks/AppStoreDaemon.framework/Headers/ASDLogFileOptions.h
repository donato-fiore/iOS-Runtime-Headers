// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDLOGFILEOPTIONS_H
#define ASDLOGFILEOPTIONS_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ASDLogFileOptions : NSObject <NSCopying>



@property (copy, nonatomic) NSString *logDirectoryPath; // ivar: _directoryPath
@property (copy, nonatomic) NSString *logFileBaseName; // ivar: _fileName
@property (nonatomic) NSUInteger maxLogFileSize; // ivar: _maxSizeInBytes
@property (nonatomic) NSInteger maxNumberOfLogFiles; // ivar: _maxNumberOfLogFiles


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif