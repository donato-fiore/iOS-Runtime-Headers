// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFCOLLECTIONSTYLE_H
#define SFCOLLECTIONSTYLE_H

@class NSString, NSDictionary, NSData;
@protocol SFCollectionStyle, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFCollectionStyle : NSObject <SFCollectionStyle, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger initiallyVisibleCardSectionCount; // ivar: _initiallyVisibleCardSectionCount
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)hasInitiallyVisibleCardSectionCount;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif