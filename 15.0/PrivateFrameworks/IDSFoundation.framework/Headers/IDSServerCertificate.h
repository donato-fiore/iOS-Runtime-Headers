// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSSERVERCERTIFICATE_H
#define IDSSERVERCERTIFICATE_H

@class NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IDSServerCertificate : NSObject <NSCopying>



@property (readonly, nonatomic) NSData *dataRepresentation; // ivar: _dataRepresentation


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDataRepresentation:(id)arg0 ;


@end


#endif