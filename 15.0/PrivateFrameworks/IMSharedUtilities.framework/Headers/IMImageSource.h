// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMIMAGESOURCE_H
#define IMIMAGESOURCE_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface IMImageSource : NSObject

@property (readonly, nonatomic) BOOL fileExists;
@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, nonatomic) *CGImageSource imageSourceRef; // ivar: _imageSourceRef


-(id)initWithFileURL:(id)arg0 ;
-(void)dealloc;


@end


#endif