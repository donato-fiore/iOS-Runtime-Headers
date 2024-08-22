// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFLINKHOVEREVENT_H
#define SFLINKHOVEREVENT_H

@class NSAttributedString, NSString, NSURL;
@protocol SFWebPageStatusBarMessage;

#import <Foundation/Foundation.h>


@interface SFLinkHoverEvent : NSObject <SFWebPageStatusBarMessage>

 {
    NSAttributedString *_attributedMessage;
    BOOL _hasTargetFrame;
    BOOL _targetFrameIsSameAsFrame;
    BOOL _hasFragmentOnSamePage;
}


@property (readonly, nonatomic) NSAttributedString *attributedMessageString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSInteger modifierFlags; // ivar: _modifierFlags
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(BOOL)isEqual:(id)arg0 ;
-(id)_formattedMessage;
-(id)initWithHoveredLinkURL:(id)arg0 forCurrentURL:(id)arg1 modifierFlags:(NSInteger)arg2 frame:(id)arg3 targetFrame:(id)arg4 ;


@end


#endif