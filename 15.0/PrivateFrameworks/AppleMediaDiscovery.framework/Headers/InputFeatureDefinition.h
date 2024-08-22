// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INPUTFEATUREDEFINITION_H
#define INPUTFEATUREDEFINITION_H

@class NSString, NSArray, NSNumber;

#import <Foundation/Foundation.h>


@interface InputFeatureDefinition : NSObject

@property (retain, nonatomic) NSString *featureId; // ivar: _featureId
@property (retain, nonatomic) NSArray *featureValues; // ivar: _featureValues
@property (retain, nonatomic) NSString *mapOp; // ivar: _mapOp
@property (retain, nonatomic) NSString *remapDictionaryId; // ivar: _remapDictionaryId
@property (retain, nonatomic) NSNumber *size; // ivar: _size


-(BOOL)isValid;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif