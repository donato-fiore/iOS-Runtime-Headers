// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIWEBFILEUPLOADITEM_H
#define _UIWEBFILEUPLOADITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _UIWebFileUploadItem : NSObject

@property (retain, nonatomic) NSString *filePath; // ivar: _filePath


-(BOOL)isVideo;
-(id)displayImage;
-(id)initWithFilePath:(id)arg0 ;
-(void)dealloc;


@end


#endif