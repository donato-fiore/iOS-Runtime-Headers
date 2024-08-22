// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFABSTRACTCOMMAND_H
#define SFABSTRACTCOMMAND_H

@class NSString, NSDictionary, NSData;
@protocol SFAbstractCommand, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SFCommandValue.h"

@interface SFAbstractCommand : NSObject <SFAbstractCommand, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) int type; // ivar: _type
@property (retain, nonatomic) SFCommandValue *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)hasType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif