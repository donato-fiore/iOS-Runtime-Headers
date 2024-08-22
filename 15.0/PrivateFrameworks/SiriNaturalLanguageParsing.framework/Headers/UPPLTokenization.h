// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UPPLTOKENIZATION_H
#define UPPLTOKENIZATION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface UPPLTokenization : NSObject

@property (readonly, nonatomic) NSString *normalizedUtterance; // ivar: _normalizedUtterance
@property (readonly, nonatomic) NSString *originalUtterance; // ivar: _originalUtterance
@property (readonly, nonatomic) NSArray *tokens; // ivar: _tokens


-(id)dictionaryRepresentation;
-(id)initWithTokens:(id)arg0 originalUtterance:(id)arg1 normalizedUtterance:(id)arg2 ;


@end


#endif