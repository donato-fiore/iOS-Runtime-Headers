// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELSTOREBROWSEROOMREQUEST_H
#define MPMODELSTOREBROWSEROOMREQUEST_H

@class NSURL, NSString;


#import "MPStoreModelRequest.h"
#import "MPModelStoreBrowseResponse.h"

@interface MPModelStoreBrowseRoomRequest : MPStoreModelRequest

@property (copy, nonatomic) NSURL *loadAdditionalContentURL; // ivar: _loadAdditionalContentURL
@property (retain, nonatomic) MPModelStoreBrowseResponse *previousResponse; // ivar: _previousResponse
@property (retain, nonatomic) MPModelStoreBrowseResponse *previousRetrievedNestedResponse; // ivar: _previousRetrievedNestedResponse
@property (copy, nonatomic) NSString *roomID; // ivar: _roomID


+(BOOL)supportsSecureCoding;
+(id)allSupportedItemProperties;
+(id)allSupportedSectionProperties;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)newOperationWithResponseHandler:(id)arg0 ;
-(void)configureWithParentSection:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif