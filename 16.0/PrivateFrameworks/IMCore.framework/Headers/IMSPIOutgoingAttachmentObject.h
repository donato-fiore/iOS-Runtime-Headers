// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMSPIOUTGOINGATTACHMENTOBJECT_H
#define IMSPIOUTGOINGATTACHMENTOBJECT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IMSPIOutgoingAttachmentObject : NSObject

@property (retain) NSString *fileURL; // ivar: _fileURL
@property BOOL isSensitive; // ivar: _isSensitive


-(id)initWithFileURL:(id)arg0 isSensitive:(BOOL)arg1 ;


@end


#endif