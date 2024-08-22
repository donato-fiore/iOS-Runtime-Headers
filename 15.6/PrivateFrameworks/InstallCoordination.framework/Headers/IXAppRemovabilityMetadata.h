// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IXAPPREMOVABILITYMETADATA_H
#define IXAPPREMOVABILITYMETADATA_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IXAppRemovabilityMetadata : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger client; // ivar: _client
@property (readonly, nonatomic) NSUInteger removability; // ivar: _removability


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithMetadataDictionary:(id)arg0 ;
-(id)initWithRemovability:(NSUInteger)arg0 client:(NSUInteger)arg1 ;


@end


#endif