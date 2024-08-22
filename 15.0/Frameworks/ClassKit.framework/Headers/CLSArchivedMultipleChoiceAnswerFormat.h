// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSARCHIVEDMULTIPLECHOICEANSWERFORMAT_H
#define CLSARCHIVEDMULTIPLECHOICEANSWERFORMAT_H

@class NSArray, NSString;
@protocol CLSRelationable;


#import "CLSArchivedAnswerFormat.h"

@interface CLSArchivedMultipleChoiceAnswerFormat : CLSArchivedAnswerFormat <CLSRelationable>

 {
    NSInteger _type;
}


@property (readonly, nonatomic) NSArray *archivedAnswerChoiceItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
+(id)relations;
-(id)_init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(void)addAnswerItem:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif