// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RESIMPLETEXTCONTENTPROVIDER_H
#define RESIMPLETEXTCONTENTPROVIDER_H

@class NSString;


#import "RETextContentProvider.h"

@interface RESimpleTextContentProvider : RETextContentProvider

@property (readonly, nonatomic) NSString *text; // ivar: _text


+(id)textContentProviderWithText:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributedStringRepresentation;
-(id)clockKitTextProviderRepresentation;
-(id)contentEncodedString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithText:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif