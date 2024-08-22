// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLUTIMANAGER_H
#define QLUTIMANAGER_H


#import <Foundation/Foundation.h>


@interface QLUTIManager : NSObject



+(id)_preferredParentUTIof:(id)arg0 fromParents:(id)arg1 ;
// +(id)_recursiveValueInDictionary:(id)arg0 forType:(id)arg1 alreadySeenUTIs:(id)arg2 matchedValueToTypeBlock:(id)arg3 validationBlock:(unk)arg4  ;
// +(id)_searchParentTypesFor:(id)arg0 fromDictionary:(id)arg1 alreadySeenUTIs:(id)arg2 matchedValueToTypeBlock:(id)arg3 validationBlock:(unk)arg4  ;
// +(id)_selectParentUTIForUTI:(id)arg0 fromParentUTIs:(id)arg1 dictionary:(id)arg2 alreadySeenUTIs:(id)arg3 matchedValueToTypeBlock:(id)arg4 validationBlock:(unk)arg5  ;
+(id)claimedAVTypes;
+(id)claimedCSVTypes;
+(id)claimedCalendarTypes;
+(id)claimedContactTypes;
+(id)claimedImageTypes;
+(id)claimedLivePhotoTypes;
+(id)claimedOfficeTypes;
+(id)claimedPDFTypes;
+(id)claimedTextTypes;
+(id)claimedWebViewTypes;
+(id)claimediWorkTypes;
+(id)findAndStoreValueInTypeKeyedDictionary:(id)arg0 forType:(id)arg1 withDescription:(id)arg2 withQueue:(id)arg3 validationBlock:(id)arg4 ;
+(id)internallyClaimedTypes;
+(id)screentimeiWorkBundleForUTI:(id)arg0 ;
+(id)textGeneratorSupportedTypes;
+(id)typesForWhichExternalGeneratorsArePreferred;
+(id)valueInTypeKeyedDictionary:(id)arg0 forType:(id)arg1 ;


@end


#endif