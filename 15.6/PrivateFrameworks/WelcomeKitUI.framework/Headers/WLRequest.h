// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLREQUEST_H
#define WLREQUEST_H

@protocol WLRequestDelegate;

#import <Foundation/Foundation.h>


@interface WLRequest : NSObject

@property (weak, nonatomic) NSObject<WLRequestDelegate> *delegate; // ivar: _delegate


-(void)request:(id)arg0 redirect:(BOOL)arg1 ;
-(void)sessionDidFinish:(id)arg0 response:(id)arg1 error:(id)arg2 redirect:(BOOL)arg3 ;


@end


#endif