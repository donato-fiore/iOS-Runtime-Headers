// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EAROOVTOKEN_H
#define _EAROOVTOKEN_H

@class NSString, NSSet;

#import <Foundation/Foundation.h>


@interface _EAROovToken : NSObject

@property (readonly, nonatomic) NSInteger frequency; // ivar: _frequency
@property (readonly, nonatomic) NSString *orthography; // ivar: _orthography
@property (readonly, nonatomic) NSSet *prons; // ivar: _prons


-(id)initWithOrthography:(id)arg0 prons:(id)arg1 frequency:(NSInteger)arg2 ;


@end


#endif