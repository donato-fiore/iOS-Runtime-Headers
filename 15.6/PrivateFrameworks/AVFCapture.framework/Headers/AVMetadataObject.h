// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVMETADATAOBJECT_H
#define AVMETADATAOBJECT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AVMetadataObjectInternal.h"

@interface AVMetadataObject : NSObject {
    AVMetadataObjectInternal *_objectInternal;
}


@property (readonly) CGRect bounds;
@property (readonly) ? duration;
@property (readonly) ? time;
@property (readonly) NSString *type;


+(id)derivedMetadataObjectFromMetadataObject:(id)arg0 withTransform:(struct CGAffineTransform )arg1 isVideoMirrored:(BOOL)arg2 rollAdjustment:(CGFloat)arg3 ;
-(NSInteger)groupID;
-(NSUInteger)syntheticFocusMode;
-(id)init;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg0 withTransform:(struct CGAffineTransform )arg1 isVideoMirrored:(BOOL)arg2 rollAdjustment:(CGFloat)arg3 ;
-(id)initWithType:(id)arg0 time:(struct ? )arg1 duration:(struct ? )arg2 bounds:(struct CGRect )arg3 optionalInfoDict:(id)arg4 originalMetadataObject:(id)arg5 sourceCaptureInput:(id)arg6 ;
-(id)input;
-(id)originalMetadataObject;
-(void)dealloc;


@end


#endif