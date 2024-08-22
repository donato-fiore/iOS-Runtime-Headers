// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSARCHIVEDOPENRESPONSEANSWERFORMAT_H
#define CLSARCHIVEDOPENRESPONSEANSWERFORMAT_H

@class NSString;
@protocol CLSRelationable;


#import "CLSArchivedAnswerFormat.h"

@interface CLSArchivedOpenResponseAnswerFormat : CLSArchivedAnswerFormat <CLSRelationable>

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
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(id)initWithType:(NSInteger)arg0 starterText:(id)arg1 minimumLength:(NSInteger)arg2 maximumLength:(NSInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setMinimum:(NSInteger)arg0 ;


@end


#endif