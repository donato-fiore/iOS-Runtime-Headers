// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUSICKIT_SOFTLINKING_MPMODELSTOREBROWSECONTENTITEM_H
#define MUSICKIT_SOFTLINKING_MPMODELSTOREBROWSECONTENTITEM_H

@class MPModelStoreBrowseContentItem, NSString;
@protocol MusicKit_SoftLinking_MPSectionedCollectionObject;

#import <Foundation/Foundation.h>

#import "MusicKit_SoftLinking_MPModelObject.h"

@interface MusicKit_SoftLinking_MPModelStoreBrowseContentItem : NSObject <MusicKit_SoftLinking_MPSectionedCollectionObject>

 {
    MPModelStoreBrowseContentItem *_underlyingItem;
}


@property (readonly, nonatomic) MPModelStoreBrowseContentItem *_underlyingObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MusicKit_SoftLinking_MPModelObject *innerObject;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *underlyingObject;


+(NSInteger)_genericObjectTypeForItemType:(NSUInteger)arg0 ;
-(id)initWithInnerObject:(id)arg0 ;


@end


#endif