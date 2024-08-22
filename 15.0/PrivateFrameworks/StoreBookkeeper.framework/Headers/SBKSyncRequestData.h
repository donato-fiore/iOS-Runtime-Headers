// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBKSYNCREQUESTDATA_H
#define SBKSYNCREQUESTDATA_H



#import "SBKRequestData.h"

@interface SBKSyncRequestData : SBKRequestData



-(BOOL)_needsConflictDetection;
-(id)_serializableConflictDetectionOrdinalForKey:(id)arg0 ;
-(id)_serializableConflictDetectionValue;
-(id)_serializableDeleteItemPayloadDictionaryForKey:(id)arg0 ;
-(id)_serializableUpdateItemPayloadDictionaryForKey:(id)arg0 ;
-(id)serializableRequestBodyPropertyList;
-(id)syncTransaction;


@end


#endif