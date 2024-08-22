// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCUSTOMINTENTOUTPUTCONTENTITEM_H
#define WFCUSTOMINTENTOUTPUTCONTENTITEM_H

@class WFContentItem, INCustomObject, NSString;
@protocol WFContentItemClass;



@interface WFCustomIntentOutputContentItem : WFContentItem <WFContentItemClass>



@property (readonly, nonatomic) INCustomObject *customObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


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
-(Class)classForCopying;
-(Class)classForKeyedArchiver;
-(id)generateObjectRepresentationsForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif