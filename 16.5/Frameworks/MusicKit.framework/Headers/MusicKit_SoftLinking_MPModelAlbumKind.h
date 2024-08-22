// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUSICKIT_SOFTLINKING_MPMODELALBUMKIND_H
#define MUSICKIT_SOFTLINKING_MPMODELALBUMKIND_H

@class MPModelKind;



@interface MusicKit_SoftLinking_MPModelAlbumKind : MPModelKind

@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) NSUInteger variants; // ivar: _variants


-(NSUInteger)_underlyingOptionsFromOptions:(NSUInteger)arg0 ;
-(NSUInteger)_underlyingVariantsFromVariants:(NSUInteger)arg0 ;
-(id)initWithVariants:(NSUInteger)arg0 options:(NSUInteger)arg1 ;


@end


#endif