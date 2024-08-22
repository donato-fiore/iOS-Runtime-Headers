// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HMDOCUMENT_H
#define _HMDOCUMENT_H

@class NSAttributedString, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _HMDocument : NSObject <NSCopying>



@property (readonly, copy) NSAttributedString *attributedString; // ivar: _attributedString
@property (readonly, copy) NSString *stringValue; // ivar: _stringValue


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;


@end


#endif