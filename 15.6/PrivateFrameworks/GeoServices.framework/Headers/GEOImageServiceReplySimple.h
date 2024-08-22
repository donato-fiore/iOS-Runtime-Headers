// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOIMAGESERVICEREPLYSIMPLE_H
#define GEOIMAGESERVICEREPLYSIMPLE_H

@class NSString;
@protocol GEOXPCReply;


#import "GEOXPCReply.h"
#import "GEOImageServiceResponse.h"

@interface GEOImageServiceReplySimple : GEOXPCReply <GEOXPCReply>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) GEOImageServiceResponse *response; // ivar: _response
@property (readonly) Class superclass;


-(BOOL)isValid;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif