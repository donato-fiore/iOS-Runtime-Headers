// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MISTOREMETADATASUBGENRE_H
#define MISTOREMETADATASUBGENRE_H

@class NSDictionary, NSString, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MIStoreMetadataSubGenre : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSString *genre; // ivar: _genre
@property (retain, nonatomic) NSNumber *genreID; // ivar: _genreID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGenre:(id)arg0 genreID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif