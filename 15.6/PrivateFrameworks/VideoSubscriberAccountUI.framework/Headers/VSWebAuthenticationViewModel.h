// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSWEBAUTHENTICATIONVIEWMODEL_H
#define VSWEBAUTHENTICATIONVIEWMODEL_H

@class NSURL;


#import "VSViewModel.h"
#import "VSMessageQueue.h"

@interface VSWebAuthenticationViewModel : VSViewModel

@property (readonly, nonatomic) VSMessageQueue *messagesFromWeb; // ivar: _messagesFromWeb
@property (readonly, nonatomic) VSMessageQueue *messagesToWeb; // ivar: _messagesToWeb
@property (copy, nonatomic) NSURL *sourceURL; // ivar: _sourceURL


-(id)init;
-(void)configureWithRequest:(id)arg0 ;


@end


#endif