// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGQUICKRESPONSESENGAGEMENTMETRICS_H
#define SGQUICKRESPONSESENGAGEMENTMETRICS_H

@class NSMutableArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SGQuickResponsesEngagementMetrics : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSMutableArray *engagementDeltas; // ivar: _engagementDeltas
@property (readonly, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (readonly, nonatomic) NSString *factorPackId; // ivar: _factorPackId
@property (readonly, nonatomic) NSString *lang; // ivar: _lang
@property (readonly, nonatomic) NSString *rolloutId; // ivar: _rolloutId
@property (readonly, nonatomic) NSString *treatmentId; // ivar: _treatmentId


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToQuickResponsesEngagementMetrics:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLang:(id)arg0 rolloutId:(id)arg1 factorPackId:(id)arg2 experimentId:(id)arg3 treatmentId:(id)arg4 ;
-(id)initWithLang:(id)arg0 rolloutId:(id)arg1 factorPackId:(id)arg2 experimentId:(id)arg3 treatmentId:(id)arg4 engagementDeltas:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif