// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOXPCDIRECTIONSREPLY_H
#define GEOXPCDIRECTIONSREPLY_H

@class NSString;
@protocol GEOXPCReply;


#import "GEOXPCReply.h"
#import "GEODirectionsError.h"
#import "GEODirectionsResponse.h"

@interface GEOXPCDirectionsReply : GEOXPCReply <GEOXPCReply>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) GEODirectionsError *directionsError; // ivar: _directionsError
@property (retain, nonatomic) GEODirectionsResponse *directionsResponse; // ivar: _directionsResponse
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isValid;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif