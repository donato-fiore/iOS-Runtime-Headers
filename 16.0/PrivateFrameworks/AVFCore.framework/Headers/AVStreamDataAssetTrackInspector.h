// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVSTREAMDATAASSETTRACKINSPECTOR_H
#define AVSTREAMDATAASSETTRACKINSPECTOR_H



#import "AVAssetTrackInspector.h"
#import "AVWeakReference.h"

@interface AVStreamDataAssetTrackInspector : AVAssetTrackInspector {
    AVWeakReference *_weakReferenceToAsset;
    int _trackID;
}




-(BOOL)isEnabled;
-(id)_initWithAsset:(id)arg0 trackID:(int)arg1 trackIndex:(NSInteger)arg2 ;
-(id)formatDescriptions;
-(id)mediaCharacteristics;
-(id)mediaType;
-(int)trackID;
-(struct ? )timeRange;
-(struct CGSize )dimensions;
-(struct CGSize )naturalSize;
-(unsigned int)figMediaType;
-(void)dealloc;


@end


#endif