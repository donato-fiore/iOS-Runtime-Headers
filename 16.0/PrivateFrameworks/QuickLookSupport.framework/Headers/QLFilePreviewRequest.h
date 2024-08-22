// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLFILEPREVIEWREQUEST_H
#define QLFILEPREVIEWREQUEST_H

@class UTType, NSURL;

#import <Foundation/Foundation.h>


@interface QLFilePreviewRequest : NSObject

@property (retain) UTType *contentType; // ivar: _contentType
@property (readonly) NSURL *fileURL; // ivar: _fileURL


-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 contentType:(id)arg1 ;


@end


#endif