// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUSICKIT_SOFTLINKING_MPMUTABLESECTIONEDCOLLECTION_H
#define MUSICKIT_SOFTLINKING_MPMUTABLESECTIONEDCOLLECTION_H

@class MPSectionedCollection, MPMutableSectionedCollection;



@interface MusicKit_SoftLinking_MPMutableSectionedCollection : MPSectionedCollection {
    MPMutableSectionedCollection *_underlyingSectionedCollection;
}


@property (readonly, nonatomic) MPMutableSectionedCollection *_underlyingSectionedCollection;


-(id)init;
-(id)initWithUnderlyingSectionedCollection:(id)arg0 ;
-(void)appendItem:(id)arg0 ;
-(void)appendItems:(id)arg0 ;
-(void)appendSection:(id)arg0 ;


@end


#endif