// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVMEDIASELECTIONNILOPTION_H
#define AVMEDIASELECTIONNILOPTION_H

@class NSDictionary;


#import "AVMediaSelectionOption.h"
#import "AVWeakReference.h"

@interface AVMediaSelectionNilOption : AVMediaSelectionOption {
    id *_groupID;
    id *_groupMediaType;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    BOOL _displaysNonForcedSubtitles;
}




-(BOOL)_representsNilSelection;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPlayable;
-(id)_groupID;
-(id)_groupMediaType;
-(id)description;
-(id)dictionary;
-(id)group;
-(id)initWithGroup:(id)arg0 ;
-(void)dealloc;


@end


#endif