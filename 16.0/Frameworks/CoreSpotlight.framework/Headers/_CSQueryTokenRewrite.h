// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CSQUERYTOKENREWRITE_H
#define _CSQUERYTOKENREWRITE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface _CSQueryTokenRewrite : NSObject

@property (copy, nonatomic) NSString *originalToken; // ivar: _originalToken
@property (readonly, copy, nonatomic) NSArray *variations; // ivar: _variations


-(id)initWithOriginalToken:(id)arg0 variations:(id)arg1 ;


@end


#endif