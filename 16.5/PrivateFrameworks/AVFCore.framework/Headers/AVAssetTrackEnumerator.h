// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVASSETTRACKENUMERATOR_H
#define AVASSETTRACKENUMERATOR_H

@class NSEnumerator, NSString, NSArray;



@interface AVAssetTrackEnumerator : NSEnumerator {
    NSString *_mediaType;
    NSArray *_mediaCharacteristics;
    NSEnumerator *_enumerator;
}




+(id)trackEnumeratorWithAsset:(id)arg0 ;
-(id)initWithAsset:(id)arg0 ;
-(id)initWithAsset:(id)arg0 mediaCharacteristics:(id)arg1 ;
-(id)initWithAsset:(id)arg0 mediaType:(id)arg1 ;
-(id)nextObject;
-(void)dealloc;
-(void)setMediaCharacteristics:(id)arg0 ;
-(void)setMediaType:(id)arg0 ;


@end


#endif