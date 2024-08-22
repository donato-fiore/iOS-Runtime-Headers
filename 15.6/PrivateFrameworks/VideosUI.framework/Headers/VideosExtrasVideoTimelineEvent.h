// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VIDEOSEXTRASVIDEOTIMELINEEVENT_H
#define VIDEOSEXTRASVIDEOTIMELINEEVENT_H

@class IKLockupElement, UIImage, NSString;

#import <Foundation/Foundation.h>

#import "VideosExtrasVideoTimelineEvent.h"

@interface VideosExtrasVideoTimelineEvent : NSObject {
    IKLockupElement *_lockup;
    UIImage *_image;
}


@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) BOOL isFirstEvent; // ivar: _isFirstEvent
@property (weak, nonatomic) VideosExtrasVideoTimelineEvent *next; // ivar: _next
@property (readonly, nonatomic) CGFloat offset; // ivar: _offset
@property (readonly, weak, nonatomic) VideosExtrasVideoTimelineEvent *previous; // ivar: _previous
@property (readonly, nonatomic) NSString *subHeader;
@property (readonly, nonatomic) NSString *title;


-(id)description;
-(id)initWithElement:(id)arg0 prev:(id)arg1 ;
-(void)loadImage:(id)arg0 ;


@end


#endif