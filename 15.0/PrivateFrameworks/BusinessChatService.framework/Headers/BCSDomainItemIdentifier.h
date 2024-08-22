// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSDOMAINITEMIDENTIFIER_H
#define BCSDOMAINITEMIDENTIFIER_H

@class NSString;
@protocol BCSDomainItemIdentifying, NSCopying;

#import <Foundation/Foundation.h>


@interface BCSDomainItemIdentifier : NSObject <BCSDomainItemIdentifying, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type


+(id)identifierWithType:(NSInteger)arg0 domain:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithType:(NSInteger)arg0 domain:(id)arg1 ;


@end


#endif