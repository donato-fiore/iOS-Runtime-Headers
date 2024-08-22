// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCOMPOSITESETTINGOPERATIONRESULT_H
#define HMDCOMPOSITESETTINGOPERATIONRESULT_H

@class HMFObject, NSError, NSString;


#import "HMDCompositeSettingMetadata.h"
#import "HMDCompositeSetting.h"

@interface HMDCompositeSettingOperationResult : HMFObject

@property (readonly, copy) NSError *error; // ivar: _error
@property (readonly, copy) NSString *keyPath; // ivar: _keyPath
@property (readonly) HMDCompositeSettingMetadata *metadata; // ivar: _metadata
@property (readonly) HMDCompositeSetting *setting; // ivar: _setting


+(id)frameWorkFetchResultsWithOperationResults:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithKeyPath:(id)arg0 setting:(id)arg1 metadata:(id)arg2 error:(id)arg3 ;


@end


#endif