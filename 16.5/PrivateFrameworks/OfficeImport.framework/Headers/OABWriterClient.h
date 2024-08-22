// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OABWRITERCLIENT_H
#define OABWRITERCLIENT_H


#import <Foundation/Foundation.h>


@interface OABWriterClient : NSObject



-(unsigned short)eshSchemeColorIndexForOADSchemeColorValue:(int)arg0 state:(id)arg1 ;
-(void)writeClientAnchorFromDrawable:(id)arg0 toObject:(id)arg1 state:(id)arg2 ;
-(void)writeClientDataFromDrawable:(id)arg0 toObject:(id)arg1 state:(id)arg2 ;
-(void)writeClientDataFromTableCell:(id)arg0 toObject:(id)arg1 state:(id)arg2 ;
-(void)writeClientTextFromShape:(id)arg0 toObject:(id)arg1 state:(id)arg2 ;


@end


#endif