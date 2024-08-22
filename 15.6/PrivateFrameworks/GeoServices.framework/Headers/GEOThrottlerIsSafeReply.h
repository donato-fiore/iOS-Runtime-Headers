// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOTHROTTLERISSAFEREPLY_H
#define GEOTHROTTLERISSAFEREPLY_H

@class NSString;
@protocol GEOXPCReply;


#import "GEOXPCReply.h"
#import "GEODataRequestThrottlerToken.h"

@interface GEOThrottlerIsSafeReply : GEOXPCReply <GEOXPCReply>



@property (nonatomic) int availableRequestCount; // ivar: _availableRequestCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat nextSafeRequestTime; // ivar: _nextSafeRequestTime
@property (readonly) Class superclass;
@property (retain, nonatomic) GEODataRequestThrottlerToken *throttlerToken; // ivar: _throttlerToken


-(BOOL)isValid;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif