// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFRESULTSECTION_H
#define SFRESULTSECTION_H

@class NSString, NSDictionary, NSData, NSArray;
@protocol SFJSONSerializable, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SFCommandButtonItem.h"

@interface SFResultSection : NSObject <SFJSONSerializable, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) SFCommandButtonItem *button; // ivar: _button
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isInitiallyHidden; // ivar: _isInitiallyHidden
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger maxInitiallyVisibleResults; // ivar: _maxInitiallyVisibleResults
@property (copy, nonatomic) NSString *moreText; // ivar: _moreText
@property (nonatomic) CGFloat rankingScore; // ivar: _rankingScore
@property (retain, nonatomic) NSArray *results; // ivar: _results
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSUInteger totalAvailableResults; // ivar: _totalAvailableResults


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif