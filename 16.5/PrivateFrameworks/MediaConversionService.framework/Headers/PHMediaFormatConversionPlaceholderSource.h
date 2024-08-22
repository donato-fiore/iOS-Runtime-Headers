// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHMEDIAFORMATCONVERSIONPLACEHOLDERSOURCE_H
#define PHMEDIAFORMATCONVERSIONPLACEHOLDERSOURCE_H

@class NSString;


#import "PHMediaFormatConversionSource.h"

@interface PHMediaFormatConversionPlaceholderSource : PHMediaFormatConversionSource

@property (copy, nonatomic) NSString *fileType; // ivar: _fileType


+(id)imageSourceForFileType:(id)arg0 ;
+(id)videoSourceForFileType:(id)arg0 ;
-(NSUInteger)length;
-(id)fileURL;
-(id)initWithFileType:(id)arg0 mediaType:(NSInteger)arg1 ;
-(struct CGSize )imageDimensions;


@end


#endif