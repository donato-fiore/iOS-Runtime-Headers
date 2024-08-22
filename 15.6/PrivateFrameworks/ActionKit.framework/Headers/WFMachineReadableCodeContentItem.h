// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFMACHINEREADABLECODECONTENTITEM_H
#define WFMACHINEREADABLECODECONTENTITEM_H

@class WFGenericFileContentItem;
@protocol WFContentItemClass;


#import "WFMachineReadableCode.h"

@interface WFMachineReadableCodeContentItem : WFGenericFileContentItem <WFContentItemClass>



@property (readonly, nonatomic) WFMachineReadableCode *codeObject;


+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg0 ;
+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)qrCodeItemWithString:(id)arg0 errorCorrectionLevel:(id)arg1 ;
+(id)typeDescription;
-(BOOL)canGenerateRepresentationForType:(id)arg0 ;
-(id)generateImageOfSize:(struct CGSize )arg0 error:(*id)arg1 ;
-(id)generateObjectRepresentationForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)preferredFileType;
-(id)preferredObjectType;


@end


#endif