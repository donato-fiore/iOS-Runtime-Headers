// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGQUICKRESPONSESREPLYRECORD_H
#define SGQUICKRESPONSESREPLYRECORD_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SGQuickResponsesReplyRecord : NSObject

@property (readonly, nonatomic) CGFloat displayed; // ivar: _displayed
@property (readonly, nonatomic) NSString *langResponse; // ivar: _langResponse
@property (readonly, nonatomic) CGFloat matched; // ivar: _matched
@property (readonly, nonatomic) CGFloat selected; // ivar: _selected


-(id)initWithDisplayed:(CGFloat)arg0 selected:(CGFloat)arg1 matched:(CGFloat)arg2 ;


@end


#endif