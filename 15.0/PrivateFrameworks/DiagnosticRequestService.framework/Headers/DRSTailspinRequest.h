// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DRSTAILSPINREQUEST_H
#define DRSTAILSPINREQUEST_H

@class NSNumber;


#import "DRSRequest.h"

@interface DRSTailspinRequest : DRSRequest

@property (readonly, nonatomic) BOOL includeOsLog; // ivar: _includeOsLog
@property (readonly, nonatomic) BOOL includeOsSignpost; // ivar: _includeOsSignpost
@property (readonly, nonatomic) NSNumber *maxMAT; // ivar: _maxMAT
@property (readonly, nonatomic) NSNumber *minMAT; // ivar: _minMAT
@property (readonly, nonatomic) BOOL scrubbed; // ivar: _scrubbed


+(BOOL)_shouldScrub;
+(Class)_moClass;
+(id)entityName;
+(id)requiredSystemResourceName;
-(BOOL)_dumpTailspinToDirectory:(id)arg0 ;
-(BOOL)isEqualToRequest:(id)arg0 ;
-(BOOL)performOnReceiptWork:(id)arg0 dampeningOutcome:(NSUInteger)arg1 ;
-(NSUInteger)expectedType;
-(id)_initWithTailspinRequestMO_ON_MOC_QUEUE:(id)arg0 ;
-(id)_metadataDescription;
-(id)_tailspinOptions;
-(id)initWithXPCDict:(id)arg0 ;
-(id)logType;
-(id)requestType;
-(void)_configureRequestMO:(id)arg0 ;


@end


#endif