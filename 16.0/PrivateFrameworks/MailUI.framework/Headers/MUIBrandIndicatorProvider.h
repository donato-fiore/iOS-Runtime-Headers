// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUIBRANDINDICATORPROVIDER_H
#define MUIBRANDINDICATORPROVIDER_H

@class EMMessageRepository;

#import <Foundation/Foundation.h>

#import "MUICachingSVGConverter.h"

@interface MUIBrandIndicatorProvider : NSObject

@property (readonly, nonatomic) EMMessageRepository *messageRepository; // ivar: _messageRepository
@property (readonly, nonatomic) MUICachingSVGConverter *svgConverter; // ivar: _svgConverter


-(id)brandIndicatorFutureForLocation:(id)arg0 ;
-(id)brandIndicatorFutureForLocation:(id)arg0 size:(struct CGSize )arg1 ;
-(id)initWithMessageRepository:(id)arg0 svgConverter:(id)arg1 ;


@end


#endif