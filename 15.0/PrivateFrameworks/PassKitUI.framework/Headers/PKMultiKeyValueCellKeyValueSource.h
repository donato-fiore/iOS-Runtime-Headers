// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKMULTIKEYVALUECELLKEYVALUESOURCE_H
#define PKMULTIKEYVALUECELLKEYVALUESOURCE_H

@class NSString, UIColor;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKMultiKeyValueCellKeyValueSource : NSObject <NSCopying>



@property (nonatomic, getter=isBold) BOOL bold; // ivar: _bold
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) UIColor *subtitleTextColor; // ivar: _subtitleTextColor
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 ;


@end


#endif