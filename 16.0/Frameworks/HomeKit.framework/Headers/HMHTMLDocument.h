// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMHTMLDOCUMENT_H
#define HMHTMLDOCUMENT_H

@class NSAttributedString, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_HMDocument.h"

@interface HMHTMLDocument : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSAttributedString *attributedString;
@property (readonly) _HMDocument *document; // ivar: _document
@property (readonly, copy) NSString *stringValue;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validateAndReturnError:(*id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif