// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIMEDIAITEMCREDITS_H
#define VUIMEDIAITEMCREDITS_H

@class NSOrderedSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VUIMediaItemCredits : NSObject <NSCopying>



@property (copy, nonatomic) NSOrderedSet *cast; // ivar: _cast
@property (copy, nonatomic) NSOrderedSet *directors; // ivar: _directors
@property (readonly, nonatomic) BOOL hasCredits;
@property (copy, nonatomic) NSOrderedSet *producers; // ivar: _producers
@property (copy, nonatomic) NSOrderedSet *screenwriters; // ivar: _screenwriters


+(id)_arrayFromStringRepresentation:(id)arg0 ;
+(id)_stringRepresentationFromArray:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithStringRepresentation:(id)arg0 ;
-(id)stringRepresentation;


@end


#endif