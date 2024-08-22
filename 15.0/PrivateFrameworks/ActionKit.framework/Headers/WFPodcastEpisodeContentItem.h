// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPODCASTEPISODECONTENTITEM_H
#define WFPODCASTEPISODECONTENTITEM_H

@class WFContentItem;
@protocol WFContentItemClass;



@interface WFPodcastEpisodeContentItem : WFContentItem <WFContentItemClass>





+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)typeDescription;
-(BOOL)getListSubtitle:(id)arg0 ;
// -(BOOL)getListThumbnail:(id)arg0 forSize:(unk)arg1  ;
-(id)episode;
-(id)generateObjectRepresentationForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)getArtworkURLForSize:(struct CGSize )arg0 type:(id)arg1 ;
-(id)preferredFileType;
// -(void)generateFileRepresentation:(id)arg0 options:(unk)arg1 forType:(id)arg2  ;
-(void)getArtworkDataWithURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif