// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELSTOREBROWSEROOMMUSICKITRESPONSEPARSER_H
#define MPMODELSTOREBROWSEROOMMUSICKITRESPONSEPARSER_H

@class NSIndexSet, ICUserIdentity;

#import <Foundation/Foundation.h>

#import "MPModelStoreBrowseSectionBuilder.h"
#import "MPModelStoreBrowseContentItemBuilder.h"
#import "MPSectionedCollection.h"

@interface MPModelStoreBrowseRoomMusicKitResponseParser : NSObject {
    NSInteger _parseOnceToken;
    id *_rawResponseOutput;
    MPModelStoreBrowseSectionBuilder *_sectionBuilder;
    MPModelStoreBrowseContentItemBuilder *_contentItemBuilder;
    NSIndexSet *_filteredFCKinds;
    MPSectionedCollection *_results;
    ICUserIdentity *_userIdentity;
}


@property (readonly, nonatomic) MPSectionedCollection *results;


-(id)_parsedContentNode:(id)arg0 additionalAttributesFromParent:(id)arg1 ;
-(id)_parsedElements:(id)arg0 ;
-(id)_parsedSectionedCollection;
-(id)initWithRawResponseOutput:(id)arg0 sectionBuilder:(id)arg1 contentItemBuilder:(id)arg2 filteredFCKinds:(id)arg3 userIdentity:(id)arg4 ;


@end


#endif