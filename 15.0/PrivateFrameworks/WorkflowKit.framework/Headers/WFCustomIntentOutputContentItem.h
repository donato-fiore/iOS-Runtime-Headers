// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCUSTOMINTENTOUTPUTCONTENTITEM_H
#define WFCUSTOMINTENTOUTPUTCONTENTITEM_H

@class WFContentItem, INCustomObject;
@protocol WFContentItemClass;



@interface WFCustomIntentOutputContentItem : WFContentItem <WFContentItemClass>



@property (readonly, nonatomic) INCustomObject *customObject;


+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)codableDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)typeDescription;
-(BOOL)getListSubtitle:(id)arg0 ;
// -(BOOL)getListThumbnail:(id)arg0 forSize:(unk)arg1  ;
-(Class)classForCoder;
-(Class)classForKeyedArchiver;
-(id)copyWithName:(id)arg0 zone:(struct _NSZone *)arg1 ;
-(id)generateObjectRepresentationsForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif