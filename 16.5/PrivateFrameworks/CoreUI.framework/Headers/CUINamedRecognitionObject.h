// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUINAMEDRECOGNITIONOBJECT_H
#define CUINAMEDRECOGNITIONOBJECT_H

@class NSData;


#import "CUINamedLookup.h"

@interface CUINamedRecognitionObject : CUINamedLookup

@property (readonly, nonatomic) NSData *objectData;
@property (readonly, nonatomic) ? referenceOriginTransformation;
@property (readonly, nonatomic) NSInteger version;


-(id)description;
-(id)initWithName:(id)arg0 usingRenditionKey:(id)arg1 fromTheme:(NSUInteger)arg2 ;


@end


#endif