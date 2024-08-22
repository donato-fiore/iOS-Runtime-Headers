// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICTABLELINKPRESENTATIONACTIVITYITEMSOURCE_H
#define ICTABLELINKPRESENTATIONACTIVITYITEMSOURCE_H

@class ICAttachment;


#import "ICLinkPresentationActivityItemSource.h"

@interface ICTableLinkPresentationActivityItemSource : ICLinkPresentationActivityItemSource

@property (retain) ICAttachment *attachment; // ivar: _attachment


-(id)detail;
-(id)init;
-(id)initWithAttachment:(id)arg0 ;
-(id)title;


@end


#endif