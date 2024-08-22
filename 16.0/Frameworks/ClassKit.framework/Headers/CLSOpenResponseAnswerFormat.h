// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSOPENRESPONSEANSWERFORMAT_H
#define CLSOPENRESPONSEANSWERFORMAT_H

@class NSString;
@protocol CLSRelationable;


#import "CLSAnswerFormat.h"

@interface CLSOpenResponseAnswerFormat : CLSAnswerFormat <CLSRelationable>

 {
    NSString *_teacherProvidedText;
    NSInteger _maximumTextLength;
    BOOL _allowsMultimedia;
}


@property (nonatomic) BOOL allowsMultimedia;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger maximumTextLength;
@property (nonatomic) NSInteger minimumTextLength; // ivar: _minimumTextLength
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *teacherProvidedText;
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)relations;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validateObject:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(id)initWithType:(NSInteger)arg0 starterText:(id)arg1 minimumLength:(NSInteger)arg2 maximumLength:(NSInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;
-(void)setMinimum:(NSInteger)arg0 ;


@end


#endif