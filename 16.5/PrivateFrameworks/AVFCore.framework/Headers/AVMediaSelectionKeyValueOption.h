// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMEDIASELECTIONKEYVALUEOPTION_H
#define AVMEDIASELECTIONKEYVALUEOPTION_H

@class NSString, NSDictionary;


#import "AVMediaSelectionOption.h"
#import "AVWeakReference.h"

@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption {
    id *_groupID;
    id *_groupMediaType;
    NSString *_optionMediaType;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    BOOL _displaysNonForcedSubtitles;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPlayable;
-(NSUInteger)hash;
-(id)_groupID;
-(id)_groupMediaType;
-(id)availableMetadataFormats;
-(id)commonMetadata;
-(id)dictionary;
-(id)group;
-(id)initWithAsset:(id)arg0 group:(id)arg1 dictionary:(id)arg2 ;
-(id)locale;
-(id)mediaType;
-(id)metadataForFormat:(id)arg0 ;
-(void)dealloc;


@end


#endif