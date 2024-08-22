// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REATTRIBUTEDTEXTCONTENTPROVIDER_H
#define REATTRIBUTEDTEXTCONTENTPROVIDER_H

@class NSAttributedString;


#import "RETextContentProvider.h"

@interface REAttributedTextContentProvider : RETextContentProvider

@property (readonly, nonatomic) NSAttributedString *text; // ivar: _text


+(id)textContentProviderWithAttributedText:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributedStringRepresentation;
-(id)clockKitTextProviderRepresentation;
-(id)contentEncodedString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAttributedText:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif