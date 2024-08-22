// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSCENECLIENTHANDSHAKE_H
#define FBSCENECLIENTHANDSHAKE_H

@class RBSProcessHandle, NSSet;

#import <Foundation/Foundation.h>


@interface FBSceneClientHandshake : NSObject

@property (readonly, nonatomic) RBSProcessHandle *handle; // ivar: _handle
@property (readonly, copy, nonatomic) NSSet *remnants; // ivar: _remnants


-(id)_initWithHandle:(id)arg0 remnants:(id)arg1 ;
-(id)description;
-(id)init;


@end


#endif