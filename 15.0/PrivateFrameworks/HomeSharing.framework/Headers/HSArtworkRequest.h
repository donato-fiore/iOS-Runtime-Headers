// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HSARTWORKREQUEST_H
#define HSARTWORKREQUEST_H



#import "HSRequest.h"

@interface HSArtworkRequest : HSRequest



+(id)requestWithDatabaseID:(unsigned int)arg0 itemID:(NSUInteger)arg1 size:(struct CGSize )arg2 ;
-(BOOL)acceptsGzipEncoding;
-(BOOL)isConcurrent;
-(id)initWithDatabaseID:(unsigned int)arg0 itemID:(NSUInteger)arg1 size:(struct CGSize )arg2 ;


@end


#endif