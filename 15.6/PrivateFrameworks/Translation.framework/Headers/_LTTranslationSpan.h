// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _LTTRANSLATIONSPAN_H
#define _LTTRANSLATIONSPAN_H

@class NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _LTTranslationSpan : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSData *metaInfoData; // ivar: _metaInfoData
@property (readonly, nonatomic) _NSRange range; // ivar: _range
@property (nonatomic) BOOL shouldTranslate; // ivar: _shouldTranslate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 range:(struct _NSRange )arg1 ;
-(id)initWithIdentifier:(id)arg0 range:(struct _NSRange )arg1 shouldTranslate:(BOOL)arg2 metaInfoData:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif