// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSFILEPROVIDERDOMAINVERSION_H
#define NSFILEPROVIDERDOMAINVERSION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSFileProviderDomainVersion : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)domainVersionWithVersion:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVersion:(NSInteger)arg0 ;
-(id)next;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif