// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RUIDETAILBUTTONELEMENT_H
#define RUIDETAILBUTTONELEMENT_H



#import "RUIElement.h"

@interface RUIDetailButtonElement : RUIElement

@property (nonatomic) NSInteger visibility; // ivar: _visibility


-(id)initWithAttributes:(id)arg0 parent:(id)arg1 ;
-(void)startActivityIndicator;
-(void)stopActivityIndicator;


@end


#endif