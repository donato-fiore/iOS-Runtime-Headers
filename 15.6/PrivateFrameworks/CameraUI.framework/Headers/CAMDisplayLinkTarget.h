// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMDISPLAYLINKTARGET_H
#define CAMDISPLAYLINKTARGET_H


#import <Foundation/Foundation.h>


@interface CAMDisplayLinkTarget : NSObject

@property (readonly, copy, nonatomic) id *handler; // ivar: _handler


-(id)initWithHandler:(id)arg0 ;
-(void)displayLinkDidFire:(id)arg0 ;


@end


#endif