// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPTOKEN_H
#define PPTOKEN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PPToken : NSObject

@property (readonly, nonatomic) NSString *tag; // ivar: _tag
@property (readonly, nonatomic) NSString *text; // ivar: _text


-(id)initWithText:(id)arg0 tag:(id)arg1 ;


@end


#endif