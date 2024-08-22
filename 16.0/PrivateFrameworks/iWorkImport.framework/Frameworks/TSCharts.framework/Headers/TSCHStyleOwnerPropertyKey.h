// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHSTYLEOWNERPROPERTYKEY_H
#define TSCHSTYLEOWNERPROPERTYKEY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSCHStyleOwnerPath.h"

@interface TSCHStyleOwnerPropertyKey : NSObject <NSCopying>



@property (readonly, nonatomic) int property; // ivar: _property
@property (readonly, nonatomic) TSCHStyleOwnerPath *styleOwnerPath; // ivar: _styleOwnerPath


+(id)propertyKeyWithStyleOwnerPath:(id)arg0 property:(int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithStyleOwnerPath:(id)arg0 property:(int)arg1 ;


@end


#endif