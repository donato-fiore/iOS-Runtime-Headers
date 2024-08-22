// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMODELSTOREBROWSERESPONSE_H
#define MPMODELSTOREBROWSERESPONSE_H



#import "MPModelResponse.h"
#import "MPChangeDetails.h"
#import "MPModelStoreBrowseResponseParser.h"

@interface MPModelStoreBrowseResponse : MPModelResponse

@property (retain, nonatomic) MPChangeDetails *changeDetails; // ivar: _changeDetails
@property (readonly, nonatomic) BOOL hasAdditionalContentItems;
@property (retain, nonatomic) MPModelStoreBrowseResponseParser *parser; // ivar: _parser




@end


#endif