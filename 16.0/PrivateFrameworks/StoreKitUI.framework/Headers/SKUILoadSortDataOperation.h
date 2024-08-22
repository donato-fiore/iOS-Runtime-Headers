// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUILOADSORTDATAOPERATION_H
#define SKUILOADSORTDATAOPERATION_H

@class SSVLoadURLOperation;


#import "SKUILoadResourceOperation.h"
#import "SKUISortDataRequest.h"

@interface SKUILoadSortDataOperation : SKUILoadResourceOperation

@property (readonly, copy) SKUISortDataRequest *resourceRequest;
@property (weak) SSVLoadURLOperation *underlyingOperation; // ivar: _underlyingOperation


-(id)initWithResourceRequest:(id)arg0 ;
-(void)cancel;
-(void)main;


@end


#endif