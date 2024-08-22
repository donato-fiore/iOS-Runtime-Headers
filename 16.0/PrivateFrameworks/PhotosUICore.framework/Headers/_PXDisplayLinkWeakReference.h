// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXDISPLAYLINKWEAKREFERENCE_H
#define _PXDISPLAYLINKWEAKREFERENCE_H


#import <Foundation/Foundation.h>


@interface _PXDisplayLinkWeakReference : NSObject

@property (readonly, weak, nonatomic) id *object; // ivar: _object
@property (readonly, nonatomic) SEL selector; // ivar: _selector


-(id)initWithObject:(id)arg0 selector:(SEL)arg1 ;
-(void)handleDisplayLink:(id)arg0 ;


@end


#endif