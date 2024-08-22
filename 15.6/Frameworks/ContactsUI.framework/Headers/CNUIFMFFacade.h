// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUIFMFFACADE_H
#define CNUIFMFFACADE_H

@class FMFSession;

#import <Foundation/Foundation.h>


@interface CNUIFMFFacade : NSObject

@property (readonly, nonatomic) FMFSession *fmfSession; // ivar: _fmfSession


-(id)init;
-(id)initWithFMFSession:(id)arg0 ;
-(void)fetchFriendHandlesWithCompletionHandler:(id)arg0 ;


@end


#endif