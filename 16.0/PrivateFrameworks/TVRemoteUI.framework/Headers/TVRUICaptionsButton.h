// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRUICAPTIONSBUTTON_H
#define TVRUICAPTIONSBUTTON_H



#import "TVRUIButton.h"

@interface TVRUICaptionsButton : TVRUIButton

@property (nonatomic) BOOL captionsEnabled; // ivar: _captionsEnabled


-(id)description;
-(id)initWithCaptionsEnabled:(BOOL)arg0 ;
-(void)layoutSubviews;


@end


#endif