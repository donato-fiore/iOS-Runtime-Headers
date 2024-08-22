// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACECARDIMPRESSIONSMETADATA_H
#define MUPLACECARDIMPRESSIONSMETADATA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MUPlaceCardImpressionsMetadata : NSObject

@property (nonatomic) NSUInteger businessId; // ivar: _businessId
@property (nonatomic, getter=isEnriched) BOOL enriched; // ivar: _enriched
@property (nonatomic) unsigned int localSearchProviderId; // ivar: _localSearchProviderId
@property (nonatomic) NSUInteger moduleIndex; // ivar: _moduleIndex
@property (nonatomic) int moduleType; // ivar: _moduleType
@property (copy, nonatomic) NSString *query; // ivar: _query




@end


#endif