// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIMEDIATAGSVIEWHELPER_H
#define VUIMEDIATAGSVIEWHELPER_H

@class NSMutableDictionary, NSDateComponentsFormatter, NSNumberFormatter;

#import <Foundation/Foundation.h>


@interface VUIMediaTagsViewHelper : NSObject {
    NSMutableDictionary *_tagsViewDictionary;
    NSDateComponentsFormatter *_dateComponentFormatter;
    NSNumberFormatter *_tomatoPercentFormatter;
}




-(BOOL)_isValidNumber:(id)arg0 ;
-(id)_commonSenseString:(id)arg0 ;
-(id)_durationDescriptionFromDuration:(id)arg0 ;
-(id)_releaseDateDescriptionFromDate:(id)arg0 ;
-(id)initWithContentMetadata:(id)arg0 additionalMetadata:(id)arg1 ;
-(id)initWithContentMetadata:(id)arg0 additionalMetadata:(id)arg1 stripUnsupportedTypes:(BOOL)arg2 ;
-(id)initWithMediaItem:(id)arg0 ;
-(id)initWithMediaItem:(id)arg0 stripUnsupportedTypes:(BOOL)arg1 ;
-(id)initWithVUIMediaEntity:(id)arg0 ;
-(id)initWithVUIMediaEntity:(id)arg0 stripUnsupportedTypes:(BOOL)arg1 ;
-(id)initWithVUIMediaItem:(id)arg0 ;
-(id)initWithVUIMediaItem:(id)arg0 stripUnsupportedTypes:(BOOL)arg1 ;
-(id)tagsViewDictionary;
-(void)_mediaBagdesWithVUIMediaEntity:(id)arg0 stripUnsupportedTypes:(BOOL)arg1 ;
-(void)addSeperatorKey:(id)arg0 ;


@end


#endif