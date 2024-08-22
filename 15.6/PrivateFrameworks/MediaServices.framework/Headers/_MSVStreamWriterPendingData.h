// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MSVSTREAMWRITERPENDINGDATA_H
#define _MSVSTREAMWRITERPENDINGDATA_H

@class NSData;

#import <Foundation/Foundation.h>


@interface _MSVStreamWriterPendingData : NSObject

@property (nonatomic) NSInteger bytesWritten; // ivar: _bytesWritten
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) NSData *data; // ivar: _data




@end


#endif