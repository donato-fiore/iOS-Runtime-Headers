// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFNUMBERCONTENTITEM_H
#define WFNUMBERCONTENTITEM_H

@class NSDictionary, NSString, NSNumber, WFFileType;
@protocol WFContentItemClass;


#import "WFContentItem.h"
#import "WFObjectType.h"

@interface WFNumberContentItem : WFContentItem <WFContentItemClass>



@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) BOOL cachesSupportedTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasStringOutput;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL includesFileRepresentationInSerializedItem;
@property (retain, nonatomic) NSNumber *maximumFractionDigitsForDisplay; // ivar: _maximumFractionDigitsForDisplay
@property (readonly, nonatomic) NSDictionary *metadataForSerialization;
@property (readonly, nonatomic) NSNumber *number;
@property (readonly, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) WFObjectType *preferredObjectType;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)coercions;
+(id)contentCategories;
+(id)countDescription;
+(id)itemWithNumber:(id)arg0 maximumFractionDigitsForDisplay:(id)arg1 ;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)typeDescription;
-(BOOL)getListSubtitle:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)roundedName;
-(void)copyStateToItem:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif