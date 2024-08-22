// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOIMAGESERVICEPURGECACHETOSIZEREPLY_H
#define GEOIMAGESERVICEPURGECACHETOSIZEREPLY_H

@class NSString;
@protocol GEOXPCReply;


#import "GEOXPCReply.h"

@interface GEOImageServicePurgeCacheToSizeReply : GEOXPCReply <GEOXPCReply>



@property (nonatomic) NSUInteger amountDeleted; // ivar: _amountDeleted
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isValid;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif