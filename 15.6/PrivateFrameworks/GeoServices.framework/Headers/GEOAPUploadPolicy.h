// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOAPUPLOADPOLICY_H
#define GEOAPUPLOADPOLICY_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface GEOAPUploadPolicy : NSObject

@property (nonatomic) BOOL sendImmediately; // ivar: _sendImmediately
@property (nonatomic) CGFloat ttl; // ivar: _ttl
@property (nonatomic) int type; // ivar: _type
@property (retain, nonatomic) NSArray *uploadStages; // ivar: _uploadStages




@end


#endif