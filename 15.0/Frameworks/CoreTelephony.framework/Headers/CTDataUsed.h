// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTDATAUSED_H
#define CTDATAUSED_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CTDataUsage.h"

@interface CTDataUsed : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CTDataUsage *native; // ivar: _native
@property (readonly, nonatomic) CTDataUsage *proxied; // ivar: _proxied


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUsage:(id)arg0 proxied:(id)arg1 ;
-(void)addNativeUsage:(id)arg0 ;
-(void)addProxiedUsage:(id)arg0 ;
-(void)addUsage:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif