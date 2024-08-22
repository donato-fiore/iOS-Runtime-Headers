// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVPMEDIAITEMPRODUCTPLACEMENTINFO_H
#define TVPMEDIAITEMPRODUCTPLACEMENTINFO_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface TVPMediaItemProductPlacementInfo : NSObject

@property (retain, nonatomic) NSNumber *duration; // ivar: _duration
@property (retain, nonatomic) NSString *imageUrlStringFormat; // ivar: _imageUrlStringFormat
@property (retain, nonatomic) NSString *localizedInfoString; // ivar: _localizedInfoString


-(id)description;
-(id)initWithLocalizedProductPlacementInfoString:(id)arg0 duration:(id)arg1 andImageURLStringFormat:(id)arg2 ;


@end


#endif