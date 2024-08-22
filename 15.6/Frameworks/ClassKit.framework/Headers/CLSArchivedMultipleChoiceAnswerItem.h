// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSARCHIVEDMULTIPLECHOICEANSWERITEM_H
#define CLSARCHIVEDMULTIPLECHOICEANSWERITEM_H

@class NSString, NSArray;
@protocol CLSRelationable, CLSAssetAdopter;


#import "CLSObject.h"

@interface CLSArchivedMultipleChoiceAnswerItem : CLSObject <CLSRelationable, CLSAssetAdopter>

 {
    NSString *_itemText;
    NSInteger _displayOrder;
}


@property (readonly, nonatomic) NSArray *assets; // ivar: assets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger displayOrder;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *itemText;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)relations;
-(id)_init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithText:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif