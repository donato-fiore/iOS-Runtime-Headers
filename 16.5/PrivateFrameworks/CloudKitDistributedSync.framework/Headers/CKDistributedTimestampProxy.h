// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDISTRIBUTEDTIMESTAMPPROXY_H
#define CKDISTRIBUTEDTIMESTAMPPROXY_H

@protocol CKXReadStructProxy;


#import "CKXStructProxyBase.h"

@interface CKDistributedTimestampProxy : CKXStructProxyBase <CKXReadStructProxy>



@property (readonly, nonatomic) NSUInteger size;


-(BOOL)unordered;
-(NSUInteger)clock;
-(NSUInteger)siteIdentifierSize;
-(id)distributedSiteIdentifier;
-(id)siteIdentifier;
-(id)timestamp;
-(unsigned char)modifier;
-(void)copySiteIdentifierBytes:(*void)arg0 length:(*NSUInteger)arg1 isNull:(*BOOL)arg2 ;


@end


#endif