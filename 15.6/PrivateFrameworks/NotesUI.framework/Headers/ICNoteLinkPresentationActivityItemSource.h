// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICNOTELINKPRESENTATIONACTIVITYITEMSOURCE_H
#define ICNOTELINKPRESENTATIONACTIVITYITEMSOURCE_H

@class UIImage;
@protocol ICSearchIndexableNote;


#import "ICLinkPresentationActivityItemSource.h"

@interface ICNoteLinkPresentationActivityItemSource : ICLinkPresentationActivityItemSource

@property (retain) NSObject<ICSearchIndexableNote> *note; // ivar: _note
@property (copy, nonatomic) UIImage *thumbnailImage; // ivar: _thumbnailImage


-(id)detail;
-(id)iconImage;
-(id)init;
-(id)initWithNote:(id)arg0 ;
-(id)initWithNote:(id)arg0 thumbnailImage:(id)arg1 ;
-(id)title;


@end


#endif