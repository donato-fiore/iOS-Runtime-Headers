// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NDANALYTICSENVELOPESTOREENTRY_H
#define NDANALYTICSENVELOPESTOREENTRY_H

@class NSString, NSDate;
@protocol NDAnalyticsEnvelopeStoreEntry;

#import <Foundation/Foundation.h>


@interface NDAnalyticsEnvelopeStoreEntry : NSObject <NDAnalyticsEnvelopeStoreEntry>

 {
    NSUInteger _submissionDateMillisecondsSince1970;
}


@property (nonatomic) int envelopeContentType; // ivar: _envelopeContentType
@property (copy, nonatomic) NSString *envelopeIdentifier; // ivar: _envelopeIdentifier
@property (copy, nonatomic) NSDate *envelopeSubmissionDate;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithStringRepresentation:(id)arg0 ;
-(id)stringRepresentation;


@end


#endif