// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELSTOREGROUPINGSMUSICKITRESPONSEPARSER_H
#define MPMODELSTOREGROUPINGSMUSICKITRESPONSEPARSER_H

@class NSIndexSet, ICUserIdentity, NSDictionary, NSRegularExpression, NSString;

#import <Foundation/Foundation.h>

#import "MPModelStoreBrowseSectionBuilder.h"
#import "MPModelStoreBrowseContentItemBuilder.h"
#import "MPSectionedCollection.h"

@interface MPModelStoreGroupingsMusicKitResponseParser : NSObject {
    NSInteger _parseOnceToken;
    id *_rawResponseOutput;
    MPModelStoreBrowseSectionBuilder *_sectionBuilder;
    MPModelStoreBrowseContentItemBuilder *_contentItemBuilder;
    NSIndexSet *_filteredFCKinds;
    MPSectionedCollection *_results;
    ICUserIdentity *_userIdentity;
    NSUInteger _options;
    NSDictionary *_storeBagDictionary;
    NSRegularExpression *_storeBagLinkRegularExpression;
    NSString *_rootObjectIdentifier;
}


@property (readonly, nonatomic) MPSectionedCollection *results;


-(BOOL)featuredContentKindCorrespondsToItem:(id)arg0 ;
-(BOOL)isContentNodeAnEditorialElement:(id)arg0 ;
-(NSInteger)featuredContentKindForNode:(id)arg0 ;
-(id)_parsedContentNode:(id)arg0 uniformContentItemTypeResolver:(id)arg1 additionalAttributesFromParent:(id)arg2 ;
-(id)_parsedEditorialElement:(id)arg0 ;
-(id)_parsedEditorialElementX:(id)arg0 ;
-(id)_parsedEditorialElements:(id)arg0 ;
-(id)_parsedSectionedCollection;
-(id)attributesForContentNode:(id)arg0 ;
-(id)bagRoomURLRegularExpression;
-(id)childrenOfContentNode:(id)arg0 ;
-(id)description;
-(id)firstChildOfContentNode:(id)arg0 ;
-(id)initWithRawResponseOutput:(id)arg0 sectionBuilder:(id)arg1 contentItemBuilder:(id)arg2 filteredFCKinds:(id)arg3 userIdentity:(id)arg4 rootObjectIdentifier:(id)arg5 options:(NSUInteger)arg6 storeBagDictionary:(id)arg7 ;
-(id)linkSectionWithDictionary:(id)arg0 ;
-(id)linksForContentNode:(id)arg0 ;
-(id)musicAPIURLWithLinkURLString:(id)arg0 ;


@end


#endif