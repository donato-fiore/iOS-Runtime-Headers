// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOMARESOURCEFETCHREPLY_H
#define GEOMARESOURCEFETCHREPLY_H

@class NSString, NSData, NSURL;
@protocol GEOXPCReply;


#import "GEOXPCReply.h"

@interface GEOMAResourceFetchReply : GEOXPCReply <GEOXPCReply>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *sandBoxToken; // ivar: _sandBoxToken
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(BOOL)isValid;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif