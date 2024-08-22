// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCOLLECTIONSTYLEHORIZONTALLYSCROLLING_H
#define SFCOLLECTIONSTYLEHORIZONTALLYSCROLLING_H

@class NSString, NSDictionary, NSData;
@protocol SFCollectionStyleHorizontallyScrolling, NSSecureCoding, NSCopying;


#import "SFCollectionStyle.h"

@interface SFCollectionStyleHorizontallyScrolling : SFCollectionStyle <SFCollectionStyleHorizontallyScrolling, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger initiallyVisibleCardSectionCount;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger numberOfRows; // ivar: _numberOfRows
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)hasNumberOfRows;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif