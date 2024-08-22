// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFREMOTEREQUEST_H
#define AFREMOTEREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AFRequestInfo.h"

@interface AFRemoteRequest : NSObject

@property (readonly, nonatomic) AFRequestInfo *info; // ivar: _info
@property (copy, nonatomic) NSString *peerIdentifier; // ivar: _peerIdentifier


-(id)initWithInfo:(id)arg0 ;
-(void)sendWithCompletion:(id)arg0 ;


@end


#endif