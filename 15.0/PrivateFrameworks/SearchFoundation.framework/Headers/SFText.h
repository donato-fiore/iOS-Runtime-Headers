// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFTEXT_H
#define SFTEXT_H

@class NSString, NSDictionary, NSData;
@protocol SFText, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFText : NSObject <SFText, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger maxLines; // ivar: _maxLines
@property (readonly) Class superclass;
@property (copy) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
+(id)textWithString:(id)arg0 ;
-(BOOL)hasMaxLines;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)length;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif