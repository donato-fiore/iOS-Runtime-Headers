// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGDECORATIONVIEWPAYLOAD_H
#define PXGDECORATIONVIEWPAYLOAD_H



#import "PXGViewPayload.h"

@interface PXGDecorationViewPayload : PXGViewPayload

@property (readonly, nonatomic) NSInteger decorationOptions; // ivar: _decorationOptions


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithDecorationOptions:(NSUInteger)arg0 viewClass:(Class)arg1 userData:(id)arg2 ;


@end


#endif