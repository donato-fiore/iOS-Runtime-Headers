// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LSQUERY_H
#define _LSQUERY_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _LSQuery : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic, getter=isLegacy) BOOL legacy; // ivar: _legacy


+(BOOL)supportsSecureCoding;
-(BOOL)_canResolveLocallyWithoutMappingDatabase;
-(BOOL)_remoteResolutionIsExpensive;
-(BOOL)_requiresDatabaseMappingEntitlement;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)resolveExpensiveQueryRemotelyUsingResolver:(id)arg0 error:(*id)arg1 ;
-(void)_enumerateWithXPCConnection:(id)arg0 block:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif