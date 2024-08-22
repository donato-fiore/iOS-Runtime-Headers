// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INTASKLIST_H
#define INTASKLIST_H

@class NSDateComponents, NSString, NSArray;
@protocol INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INSpeakableString.h"

@interface INTaskList : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDateComponents *createdDateComponents; // ivar: _createdDateComponents
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) INSpeakableString *groupName; // ivar: _groupName
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSDateComponents *modifiedDateComponents; // ivar: _modifiedDateComponents
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) NSInteger taskListType;
@property (readonly, copy, nonatomic) NSArray *tasks; // ivar: _tasks
@property (readonly, copy, nonatomic) INSpeakableString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_cacheableObjects;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)_intents_readableTitleWithLocalizer:(id)arg0 metadata:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 tasks:(id)arg1 groupName:(id)arg2 createdDateComponents:(id)arg3 modifiedDateComponents:(id)arg4 identifier:(id)arg5 ;
-(id)initWithTitle:(id)arg0 tasks:(id)arg1 groupName:(id)arg2 taskListType:(NSInteger)arg3 createdDateComponents:(id)arg4 modifiedDateComponents:(id)arg5 identifier:(id)arg6 ;
-(void)_intents_updateContainerWithCache:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif