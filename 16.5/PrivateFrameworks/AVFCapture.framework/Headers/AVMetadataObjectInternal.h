// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMETADATAOBJECTINTERNAL_H
#define AVMETADATAOBJECTINTERNAL_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AVCaptureInput.h"
#import "AVMetadataObject.h"

@interface AVMetadataObjectInternal : NSObject

@property CGRect bounds; // ivar: _bounds
@property NSInteger detectionSource; // ivar: _detectionSource
@property ? duration; // ivar: _duration
@property NSInteger groupID; // ivar: _groupID
@property (retain) AVCaptureInput *input; // ivar: _input
@property (retain) AVMetadataObject *originalMetadataObject; // ivar: _originalMetadataObject
@property NSUInteger syntheticFocusMode; // ivar: _syntheticFocusMode
@property ? time; // ivar: _time
@property (retain) NSString *type; // ivar: _type


-(id)init;
-(void)dealloc;


@end


#endif