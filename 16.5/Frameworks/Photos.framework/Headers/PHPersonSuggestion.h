// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHPERSONSUGGESTION_H
#define PHPERSONSUGGESTION_H


#import <Foundation/Foundation.h>

#import "PHFace.h"
#import "PHPerson.h"

@interface PHPersonSuggestion : NSObject

@property (readonly, nonatomic) BOOL confirmed; // ivar: _confirmed
@property (readonly, nonatomic) PHFace *keyFace; // ivar: _keyFace
@property (readonly, nonatomic) PHPerson *person; // ivar: _person


-(id)initWithKeyFace:(id)arg0 person:(id)arg1 confirmed:(BOOL)arg2 ;


@end


#endif