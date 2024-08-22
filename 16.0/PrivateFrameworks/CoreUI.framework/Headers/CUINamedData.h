// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUINAMEDDATA_H
#define CUINAMEDDATA_H

@class NSData, NSString;


#import "CUINamedLookup.h"

@interface CUINamedData : CUINamedLookup

@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *utiType;


-(id)description;
-(id)initWithName:(id)arg0 usingRenditionKey:(id)arg1 fromTheme:(NSUInteger)arg2 ;


@end


#endif