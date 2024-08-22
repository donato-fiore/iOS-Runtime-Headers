// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2INTEGRITYPROTOCOL_H
#define NEIKEV2INTEGRITYPROTOCOL_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NEIKEv2IntegrityProtocol : NSObject <NSCopying>



@property (readonly) unsigned int digestLength;
@property (readonly) unsigned int keyLength;
@property NSUInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithType:(NSUInteger)arg0 ;


@end


#endif