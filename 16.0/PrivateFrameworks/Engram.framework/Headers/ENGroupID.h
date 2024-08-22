// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENGROUPID_H
#define ENGROUPID_H

@class NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ENStableGroupID.h"

@interface ENGroupID : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSData *dataRepresentation;
@property (readonly, nonatomic) int generation; // ivar: _generation
@property (readonly, nonatomic) ENStableGroupID *stableGroupID; // ivar: _stableGroupID


+(BOOL)supportsSecureCoding;
-(BOOL)compare:(id)arg0 withResult:(*NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDataRepresentation:(id)arg0 ;
-(id)initWithStableGroupID:(id)arg0 generation:(int)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif