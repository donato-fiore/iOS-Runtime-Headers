// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMMEDIASYSTEMROLE_H
#define HMMEDIASYSTEMROLE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMMediaSystemRole : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)roleFromDictionary:(id)arg0 roleOutput:(*NSUInteger)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)leftRole;
+(id)rightRole;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithRole:(NSUInteger)arg0 ;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif