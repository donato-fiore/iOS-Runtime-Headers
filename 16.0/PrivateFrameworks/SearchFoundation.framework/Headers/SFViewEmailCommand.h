// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFVIEWEMAILCOMMAND_H
#define SFVIEWEMAILCOMMAND_H

@class NSString, NSDictionary, NSData;
@protocol SFViewEmailCommand, NSSecureCoding, NSCopying;


#import "SFCommand.h"

@interface SFViewEmailCommand : SFCommand <SFViewEmailCommand, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *commandDetail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) BOOL placeHolderProperty; // ivar: _placeHolderProperty
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)hasPlaceHolderProperty;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif