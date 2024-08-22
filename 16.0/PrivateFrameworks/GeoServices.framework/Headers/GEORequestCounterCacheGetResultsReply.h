// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOREQUESTCOUNTERCACHEGETRESULTSREPLY_H
#define GEOREQUESTCOUNTERCACHEGETRESULTSREPLY_H

@class NSString, NSArray;
@protocol GEOXPCReply;


#import "GEOXPCReply.h"

@interface GEORequestCounterCacheGetResultsReply : GEOXPCReply <GEOXPCReply>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *results; // ivar: _results
@property (readonly) Class superclass;


-(BOOL)isValid;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif