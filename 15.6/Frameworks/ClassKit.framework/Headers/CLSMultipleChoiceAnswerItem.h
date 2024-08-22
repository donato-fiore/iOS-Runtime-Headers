// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSMULTIPLECHOICEANSWERITEM_H
#define CLSMULTIPLECHOICEANSWERITEM_H

@class NSString, NSArray;
@protocol CLSRelationable, CLSMutableAssetAdopter;


#import "CLSObject.h"

@interface CLSMultipleChoiceAnswerItem : CLSObject <CLSRelationable, CLSMutableAssetAdopter>

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
-(BOOL)assetsEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithText:(id)arg0 ;
-(void)addAsset:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;
-(void)removeAsset:(id)arg0 ;


@end


#endif