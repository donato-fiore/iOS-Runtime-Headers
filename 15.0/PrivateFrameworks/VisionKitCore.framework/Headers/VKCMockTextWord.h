// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKCMOCKTEXTWORD_H
#define VKCMOCKTEXTWORD_H

@class NSString;

#import <Foundation/Foundation.h>

#import "VKQuad.h"

@interface VKCMockTextWord : NSObject

@property (retain, nonatomic) VKQuad *quad; // ivar: _quad
@property (nonatomic) _NSRange range; // ivar: _range
@property (retain, nonatomic) NSString *text; // ivar: _text


-(id)initWithWordsDictionary:(id)arg0 ;


@end


#endif