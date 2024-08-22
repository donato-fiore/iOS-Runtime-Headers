// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSSMOTIONTRACKINGVIDEOFILEINPUT_H
#define AXSSMOTIONTRACKINGVIDEOFILEINPUT_H

@class NSString;


#import "AXSSMotionTrackingInput.h"

@interface AXSSMotionTrackingVideoFileInput : AXSSMotionTrackingInput

@property (copy, nonatomic) NSString *_name; // ivar: __name
@property (readonly, copy, nonatomic) NSString *name;


+(BOOL)supportsSecureCoding;
+(id)videoFileInputWithName:(id)arg0 ;
-(BOOL)isVideoFile;
-(BOOL)supportsExpressions;
-(NSUInteger)trackingType;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithPlistDictionary:(id)arg0 ;
-(id)plistDictionary;
-(id)uniqueIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif