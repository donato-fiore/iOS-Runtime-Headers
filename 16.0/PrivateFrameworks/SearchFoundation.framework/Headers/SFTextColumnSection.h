// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFTEXTCOLUMNSECTION_H
#define SFTEXTCOLUMNSECTION_H

@class NSString, NSDictionary, NSData, NSArray;
@protocol SFTextColumnSection, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFTextColumnSection : NSObject <SFTextColumnSection, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *textLines; // ivar: _textLines
@property (nonatomic) BOOL textNoWrap; // ivar: _textNoWrap
@property (nonatomic) NSUInteger textWeight; // ivar: _textWeight


+(BOOL)supportsSecureCoding;
-(BOOL)hasTextNoWrap;
-(BOOL)hasTextWeight;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif