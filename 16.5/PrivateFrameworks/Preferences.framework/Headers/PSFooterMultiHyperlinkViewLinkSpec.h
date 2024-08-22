// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSFOOTERMULTIHYPERLINKVIEWLINKSPEC_H
#define PSFOOTERMULTIHYPERLINKVIEWLINKSPEC_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface PSFooterMultiHyperlinkViewLinkSpec : NSObject

@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (nonatomic) SEL action; // ivar: _action
@property (nonatomic) _NSRange linkRange; // ivar: _linkRange
@property (weak, nonatomic) id *target; // ivar: _target


+(id)specWithRange:(struct _NSRange )arg0 target:(id)arg1 action:(SEL)arg2 ;
+(id)specWithRange:(struct _NSRange )arg0 url:(id)arg1 ;


@end


#endif