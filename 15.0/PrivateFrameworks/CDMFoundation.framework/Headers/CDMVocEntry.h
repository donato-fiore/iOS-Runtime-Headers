// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMVOCENTRY_H
#define CDMVOCENTRY_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface CDMVocEntry : NSObject

@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSArray *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSString *semantic; // ivar: _semantic
@property (readonly, nonatomic) NSString *text; // ivar: _text


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithText:(id)arg0 label:(id)arg1 semantic:(id)arg2 ;


@end


#endif