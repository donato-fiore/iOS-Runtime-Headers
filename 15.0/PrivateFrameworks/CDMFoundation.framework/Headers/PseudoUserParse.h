// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSEUDOUSERPARSE_H
#define PSEUDOUSERPARSE_H

@class SIRINLUUserParse;

#import <Foundation/Foundation.h>


@interface PseudoUserParse : NSObject

@property (readonly) float score; // ivar: _score
@property (readonly) SIRINLUUserParse *userParse; // ivar: _userParse


-(id)initWithParse:(id)arg0 score:(float)arg1 ;


@end


#endif