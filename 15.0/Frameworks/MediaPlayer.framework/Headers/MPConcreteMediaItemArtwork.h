// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCONCRETEMEDIAITEMARTWORK_H
#define MPCONCRETEMEDIAITEMARTWORK_H



#import "MPMediaItemArtwork.h"
#import "MPArtworkCatalog.h"

@interface MPConcreteMediaItemArtwork : MPMediaItemArtwork {
    MPArtworkCatalog *_catalog;
    CGRect _bounds;
}


@property (readonly, nonatomic) MPArtworkCatalog *artworkCatalog;


-(id)initWithArtworkCatalog:(id)arg0 ;
-(id)initWithArtworkCatalog:(id)arg0 allowsNetworking:(BOOL)arg1 ;
-(struct CGRect )bounds;


@end


#endif