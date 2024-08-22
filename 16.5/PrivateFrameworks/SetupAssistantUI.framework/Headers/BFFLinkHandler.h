// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BFFLINKHANDLER_H
#define BFFLINKHANDLER_H

@class UIButton;

#import <Foundation/Foundation.h>


@interface BFFLinkHandler : NSObject

@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (copy, nonatomic) id *handler; // ivar: _handler


-(id)init;
-(void)buttonPressed:(id)arg0 ;


@end


#endif