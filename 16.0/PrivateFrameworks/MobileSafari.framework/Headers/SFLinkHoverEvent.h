// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFLINKHOVEREVENT_H
#define SFLINKHOVEREVENT_H

@class NSAttributedString, NSURL;

#import <Foundation/Foundation.h>


@interface SFLinkHoverEvent : NSObject {
    NSAttributedString *_attributedMessage;
    BOOL _hasTargetFrame;
    BOOL _targetFrameIsSameAsFrame;
    BOOL _hasFragmentOnSamePage;
}


@property (readonly, nonatomic) NSAttributedString *attributedStatusBarMessage;
@property (readonly, nonatomic) NSInteger modifierFlags; // ivar: _modifierFlags
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(BOOL)isEqual:(id)arg0 ;
-(id)_formattedMessage;
-(id)initWithHoveredLinkURL:(id)arg0 forCurrentURL:(id)arg1 modifierFlags:(NSInteger)arg2 frame:(id)arg3 targetFrame:(id)arg4 ;


@end


#endif