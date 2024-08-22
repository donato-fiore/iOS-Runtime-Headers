// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMAPPLICATIONTERMINATIONASSERTION_H
#define MCMAPPLICATIONTERMINATIONASSERTION_H

@class RBSTerminationAssertion;

#import <Foundation/Foundation.h>


@interface MCMApplicationTerminationAssertion : NSObject

@property (retain, nonatomic) RBSTerminationAssertion *termAssertion; // ivar: _termAssertion


-(id)initWithBundleIdentifier:(id)arg0 reason:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif