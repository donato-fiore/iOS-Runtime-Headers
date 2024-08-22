// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ECHTMLSTRINGANDMIMECHARSET_H
#define ECHTMLSTRINGANDMIMECHARSET_H

@class NSString;
@protocol ECMIMECharset;

#import <Foundation/Foundation.h>


@interface ECHTMLStringAndMIMECharset : NSObject

@property (readonly, nonatomic) NSObject<ECMIMECharset> *charset; // ivar: _charset
@property (readonly, copy, nonatomic) NSString *string; // ivar: _string


-(id)initWithString:(id)arg0 charset:(id)arg1 ;


@end


#endif