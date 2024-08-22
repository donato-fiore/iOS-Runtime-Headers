// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBHOMECONTENT_H
#define _INPBHOMECONTENT_H

@class PBCodable, NSArray, NSString;
@protocol _INPBHomeContent, NSSecureCoding, NSCopying;


#import "_INPBHomeFilter.h"

@interface _INPBHomeContent : PBCodable <_INPBHomeContent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, nonatomic) NSUInteger actionsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBHomeFilter *filter; // ivar: _filter
@property (readonly, nonatomic) BOOL hasFilter;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)actionsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)addActions:(id)arg0 ;
-(void)clearActions;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif