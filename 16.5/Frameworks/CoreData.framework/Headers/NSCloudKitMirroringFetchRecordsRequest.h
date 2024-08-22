// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCLOUDKITMIRRORINGFETCHRECORDSREQUEST_H
#define NSCLOUDKITMIRRORINGFETCHRECORDSREQUEST_H

@class NSDictionary, NSArray;


#import "NSCloudKitMirroringImportRequest.h"

@interface NSCloudKitMirroringFetchRecordsRequest : NSCloudKitMirroringImportRequest {
    NSDictionary *_entityNameToAttributesToFetch;
    NSDictionary *_entityNameToAttributeNamesToFetch;
    BOOL _editable;
    NSUInteger _perOperationObjectThreshold;
}


@property (readonly, copy, nonatomic) NSDictionary *entityNameToAttributesToFetch;
@property (copy, nonatomic) NSArray *objectIDsToFetch; // ivar: _objectIDsToFetch


-(BOOL)validateForUseWithStore:(id)arg0 error:(*id)arg1 ;
-(id)initWithOptions:(id)arg0 completionBlock:(id)arg1 ;
-(void)dealloc;
-(void)setEntityNameToAttributeNamesToFetch:(id)arg0 ;


@end


#endif