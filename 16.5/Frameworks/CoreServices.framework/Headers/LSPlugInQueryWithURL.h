// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LSPLUGINQUERYWITHURL_H
#define LSPLUGINQUERYWITHURL_H

@class NSURL;


#import "LSPlugInQuery.h"

@interface LSPlugInQueryWithURL : LSPlugInQuery {
    NSURL *_bundleURL;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_bundleURL;
-(id)_initWithURL:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_enumerateWithXPCConnection:(id)arg0 block:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif