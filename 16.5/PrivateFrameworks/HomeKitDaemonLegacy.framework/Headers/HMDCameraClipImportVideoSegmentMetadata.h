// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERACLIPIMPORTVIDEOSEGMENTMETADATA_H
#define HMDCAMERACLIPIMPORTVIDEOSEGMENTMETADATA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HMDCameraClipImportVideoSegmentMetadata : NSObject

@property (readonly) CGFloat duration; // ivar: _duration
@property (readonly, getter=isHeader) BOOL header; // ivar: _header
@property (readonly, copy) NSString *resourcePath; // ivar: _resourcePath


-(id)initWithVideoSegmentMetadata:(id)arg0 ;


@end


#endif