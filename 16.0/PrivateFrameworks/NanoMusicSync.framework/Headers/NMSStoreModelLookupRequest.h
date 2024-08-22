// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSSTOREMODELLOOKUPREQUEST_H
#define NMSSTOREMODELLOOKUPREQUEST_H

@class MPStoreModelRequest, NSArray;



@interface NMSStoreModelLookupRequest : MPStoreModelRequest

@property (copy, nonatomic) NSArray *containerIDs; // ivar: _containerIDs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)newOperationWithResponseHandler:(id)arg0 ;


@end


#endif