// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _LSCURRENTBUNDLEPROXYQUERY_H
#define _LSCURRENTBUNDLEPROXYQUERY_H

@class LSBundleQuery;



@interface _LSCurrentBundleProxyQuery : LSBundleQuery



+(BOOL)supportsSecureCoding;
+(CGFloat)cacheInterval;
+(id)currentBundleProxyQuery;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(void)_enumerateWithXPCConnection:(id)arg0 block:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif