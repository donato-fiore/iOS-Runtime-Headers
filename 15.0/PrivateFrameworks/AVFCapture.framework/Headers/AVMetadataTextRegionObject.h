// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVMETADATATEXTREGIONOBJECT_H
#define AVMETADATATEXTREGIONOBJECT_H



#import "AVMetadataObject.h"

@interface AVMetadataTextRegionObject : AVMetadataObject

@property (readonly) float angularOffset; // ivar: _angularOffset
@property (readonly) CGRect angularOffsetBounds; // ivar: _angularOffsetBounds
@property (readonly) float confidence; // ivar: _confidence
@property (readonly) NSInteger regionID; // ivar: _regionID


+(id)textRegionObjectWithDictionary:(id)arg0 input:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg0 withTransform:(struct CGAffineTransform )arg1 isVideoMirrored:(BOOL)arg2 rollAdjustment:(CGFloat)arg3 ;
-(id)initTextRegionObjectWithDictionary:(id)arg0 input:(id)arg1 ;
-(void)dealloc;


@end


#endif