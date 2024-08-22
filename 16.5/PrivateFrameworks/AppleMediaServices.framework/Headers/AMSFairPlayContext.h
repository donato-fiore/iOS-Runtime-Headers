// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSFAIRPLAYCONTEXT_H
#define AMSFAIRPLAYCONTEXT_H


#import <Foundation/Foundation.h>


@interface AMSFairPlayContext : NSObject

@property (nonatomic) unsigned int contextID; // ivar: _contextID


-(id)init;
-(unsigned int)fairplayContextIDWithError:(*id)arg0 ;
-(void)dealloc;
-(void)destroyContext;


@end


#endif