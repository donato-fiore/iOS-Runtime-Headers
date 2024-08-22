// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MSTEMPURL_H
#define _MSTEMPURL_H

@class NSURL;



@interface _MSTempURL : NSURL



+(BOOL)_isInvalidPath:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_resolvedTempDirectory;
-(Class)classForCoder;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;


@end


#endif