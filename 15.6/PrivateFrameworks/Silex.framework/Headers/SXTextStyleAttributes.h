// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXTEXTSTYLEATTRIBUTES_H
#define SXTEXTSTYLEATTRIBUTES_H

@class NSDictionary, NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SXTextStyleAttributes : NSObject <NSCopying>



@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) NSMutableDictionary *mutableAttributes; // ivar: _mutableAttributes
@property (readonly, nonatomic) _NSRange range; // ivar: _range


+(id)attributesWithRange:(struct _NSRange )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithRange:(struct _NSRange )arg0 ;
-(void)addAttribute:(id)arg0 value:(id)arg1 ;


@end


#endif