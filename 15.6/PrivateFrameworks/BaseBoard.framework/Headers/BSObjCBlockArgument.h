// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSOBJCBLOCKARGUMENT_H
#define BSOBJCBLOCKARGUMENT_H

@class NSArray;


#import "BSObjCArgument.h"

@interface BSObjCBlockArgument : BSObjCArgument

@property (readonly, copy, nonatomic) NSArray *arguments; // ivar: _arguments
@property (readonly, retain, nonatomic) BSObjCArgument *returnValue; // ivar: _returnValue


-(BOOL)isBlock;
-(id)_prettyTypeString;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;


@end


#endif