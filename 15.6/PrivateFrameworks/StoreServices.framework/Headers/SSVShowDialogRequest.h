// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSVSHOWDIALOGREQUEST_H
#define SSVSHOWDIALOGREQUEST_H

@class NSString;
@protocol SSXPCCoding, OS_xpc_object;


#import "SSRequest.h"

@interface SSVShowDialogRequest : SSRequest <SSXPCCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *encodedDialog; // ivar: _dialog
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyXPCEncoding;
-(id)initWithEncodedDialog:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)startWithDialogResponseBlock:(id)arg0 ;


@end


#endif