// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSFILEOPERATIONID_H
#define DSFILEOPERATIONID_H

@class NSUUID;
@protocol DSHashableEquatable, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DSFileOperationID : NSObject <DSHashableEquatable, NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif