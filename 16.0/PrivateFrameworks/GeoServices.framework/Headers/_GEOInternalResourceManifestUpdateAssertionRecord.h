// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOINTERNALRESOURCEMANIFESTUPDATEASSERTIONRECORD_H
#define _GEOINTERNALRESOURCEMANIFESTUPDATEASSERTIONRECORD_H

@class GEOResourceManifestUpdateAssertionRecord;



@interface _GEOInternalResourceManifestUpdateAssertionRecord : GEOResourceManifestUpdateAssertionRecord



-(BOOL)isExpired;
-(id)description;
-(id)initWithProcess:(id)arg0 reason:(id)arg1 creationTimestamp:(CGFloat)arg2 ;
-(id)initWithReason:(id)arg0 ;


@end


#endif