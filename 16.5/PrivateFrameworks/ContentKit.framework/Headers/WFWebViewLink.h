// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWEBVIEWLINK_H
#define WFWEBVIEWLINK_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface WFWebViewLink : NSObject

@property (readonly, nonatomic) NSURL *href; // ivar: _href
@property (readonly, nonatomic) CGRect rect; // ivar: _rect


-(id)initWithHref:(id)arg0 rect:(struct CGRect )arg1 ;


@end


#endif