// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKMULTIKEYVALUECELLKEYVALUESOURCE_H
#define PKMULTIKEYVALUECELLKEYVALUESOURCE_H

@class NSString, UIColor;
@protocol NSCopying, PKIdentifiable;

#import <Foundation/Foundation.h>


@interface PKMultiKeyValueCellKeyValueSource : NSObject <NSCopying, PKIdentifiable>



@property (nonatomic, getter=isBold) BOOL bold; // ivar: _bold
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) UIColor *subtitleTextColor; // ivar: _subtitleTextColor
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 ;


@end


#endif