// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUICOUNTDOWN_H
#define SKUICOUNTDOWN_H

@class NSURL, NSDate, UIColor, NSString;
@protocol SKUIArtworkProviding;

#import <Foundation/Foundation.h>


@interface SKUICountdown : NSObject {
    BOOL _isLoaded;
}


@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) NSObject<SKUIArtworkProviding> *artworkProvider; // ivar: _artworkProvider
@property (nonatomic) NSUInteger dateFormat; // ivar: _dateFormat
@property (retain, nonatomic) NSObject<SKUIArtworkProviding> *endArtworkProvider; // ivar: _endArtworkProvider
@property (copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (nonatomic) NSInteger finalValue; // ivar: _finalValue
@property (copy, nonatomic) UIColor *flapBottomColor; // ivar: _flapBottomColor
@property (copy, nonatomic) UIColor *flapTopColor; // ivar: _flapTopColor
@property (nonatomic, getter=isFlapped) BOOL flapped; // ivar: _flapped
@property (copy, nonatomic) UIColor *fontColor; // ivar: _fontColor
@property (nonatomic) NSInteger initialValue; // ivar: _initialValue
@property (copy, nonatomic) NSString *numberFormat; // ivar: _numberFormat
@property (nonatomic) NSInteger rate; // ivar: _rate
@property (copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (nonatomic) NSInteger type; // ivar: _type


-(BOOL)isLoaded;
-(id)initWithCountdownDictionary:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif