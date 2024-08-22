// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSTACKEDTEXTITEM_H
#define PKSTACKEDTEXTITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PKStackedTextItem : NSObject

@property (nonatomic, getter=isDeemphasizedPrimary) BOOL deemphasizedPrimary; // ivar: _deemphasizedPrimary
@property (readonly, copy, nonatomic) NSString *groupingIdentifier; // ivar: _groupingIdentifier
@property (readonly, nonatomic) NSUInteger numberOfContentRows; // ivar: _numberOfContentRows
@property (copy, nonatomic) NSString *primary; // ivar: _primary
@property (copy, nonatomic) NSString *secondary; // ivar: _secondary
@property (nonatomic, getter=isSignificantPrimary) BOOL significantPrimary; // ivar: _significantPrimary
@property (nonatomic, getter=isStrikethroughPrimary) BOOL strikethroughPrimary; // ivar: _strikethroughPrimary
@property (copy, nonatomic) NSString *tertiary; // ivar: _tertiary
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithNumberOfContentRows:(NSUInteger)arg0 groupingIdentifier:(id)arg1 ;


@end


#endif