// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHUPDATEMANAGERTARGETTOKENSTATE_H
#define PGGRAPHUPDATEMANAGERTARGETTOKENSTATE_H

@class PHPersistentChangeToken;

#import <Foundation/Foundation.h>


@interface PGGraphUpdateManagerTargetTokenState : NSObject

@property (readonly, nonatomic) PHPersistentChangeToken *changeToken; // ivar: _changeToken
@property (nonatomic) BOOL encounteredTargetToken; // ivar: _encounteredTargetToken


-(id)description;
-(id)initWithPersistentChangeToken:(id)arg0 ;


@end


#endif