// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCOLLECTIONSTYLEROW_H
#define SFCOLLECTIONSTYLEROW_H

@class NSString, NSDictionary, NSData;
@protocol SFCollectionStyleRow, NSSecureCoding, NSCopying;


#import "SFCollectionStyle.h"

@interface SFCollectionStyleRow : SFCollectionStyle <SFCollectionStyleRow, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL drawPlattersIfNecessary; // ivar: _drawPlattersIfNecessary
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger initiallyVisibleCardSectionCount;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)hasDrawPlattersIfNecessary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif