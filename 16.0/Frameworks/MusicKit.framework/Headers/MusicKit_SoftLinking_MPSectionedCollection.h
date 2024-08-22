// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUSICKIT_SOFTLINKING_MPSECTIONEDCOLLECTION_H
#define MUSICKIT_SOFTLINKING_MPSECTIONEDCOLLECTION_H

@class MPSectionedCollection;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPSectionedCollection : NSObject {
    MPSectionedCollection *_underlyingSectionedCollection;
}


@property (readonly, nonatomic) MPSectionedCollection *_underlyingSectionedCollection;
@property (readonly, nonatomic) id *itemAtIndexPathBlock;
@property (readonly, nonatomic) id *sectionItemAtIndexPathBlock;


-(NSInteger)numberOfSections;
-(id)allItems;
-(id)allSections;
-(id)init;
-(id)initWithUnderlyingSectionedCollection:(id)arg0 ;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)sectionAtIndex:(NSInteger)arg0 ;
-(void)enumerateItemIdentifiersInSectionAtIndex:(NSInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateItemIdentifiersUsingBlock:(id)arg0 ;
-(void)enumerateSectionIdentifiersUsingBlock:(id)arg0 ;
-(void)enumerateTitledSectionsUsingBlock:(id)arg0 ;


@end


#endif