// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCOLLECTIONSTYLEGRID_H
#define SFCOLLECTIONSTYLEGRID_H

@class NSString, NSDictionary, NSData;
@protocol SFCollectionStyleGrid, NSSecureCoding, NSCopying;


#import "SFCollectionStyle.h"

@interface SFCollectionStyleGrid : SFCollectionStyle <SFCollectionStyleGrid, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger initiallyVisibleCardSectionCount;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger numberOfColumns; // ivar: _numberOfColumns
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)hasNumberOfColumns;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif