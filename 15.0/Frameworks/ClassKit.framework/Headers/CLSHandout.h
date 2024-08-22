// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSHANDOUT_H
#define CLSHANDOUT_H

@class NSString, NSDate, NSArray, NSError;
@protocol CLSRelationable, CLSCollaborationStateRepresentable;


#import "CLSAbstractHandout.h"
#import "CLSClass.h"

@interface CLSHandout : CLSAbstractHandout <CLSRelationable, CLSCollaborationStateRepresentable>

 {
    NSString *_title;
    NSString *_instructions;
    NSDate *_dueDate;
    BOOL _reviewed;
}


@property (readonly, nonatomic) NSArray *attachmentCollaborationStates;
@property (readonly, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) NSArray *collaborationStates;
@property (retain, nonatomic) NSDate *dateLastReviewed; // ivar: _dateLastReviewed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CLSClass *effectiveClass;
@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastReviewedDate;
@property (retain, nonatomic) NSError *publishError; // ivar: _publishError
@property (nonatomic) NSInteger publishingState; // ivar: _publishingState
@property (readonly, nonatomic) NSArray *recipients;
@property (nonatomic, getter=isReviewed) BOOL reviewed;
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)new;
+(id)relations;
-(BOOL)validateObject:(*id)arg0 ;
-(id)_init;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_adjustPublishingStateIfNeeded;
-(void)addHandoutAttachment:(id)arg0 ;
-(void)addHandoutRecipient:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;
-(void)removeHandoutAttachment:(id)arg0 ;
-(void)removeHandoutRecipient:(id)arg0 ;


@end


#endif