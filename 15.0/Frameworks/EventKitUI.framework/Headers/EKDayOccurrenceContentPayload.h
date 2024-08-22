// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKDAYOCCURRENCECONTENTPAYLOAD_H
#define EKDAYOCCURRENCECONTENTPAYLOAD_H

@class UIImage, NSAttributedString;

#import <Foundation/Foundation.h>


@interface EKDayOccurrenceContentPayload : NSObject

@property (readonly, nonatomic) UIImage *backgroundImage; // ivar: _backgroundImage
@property (readonly, nonatomic) NSInteger requestId; // ivar: _requestId
@property (readonly, nonatomic) NSUInteger requestOptions; // ivar: _requestOptions
@property (readonly, nonatomic) UIImage *textImage; // ivar: _textImage
@property (readonly, nonatomic) UIImage *travelTimeImage; // ivar: _travelTimeImage
@property (readonly, nonatomic) NSAttributedString *travelTimeString; // ivar: _travelTimeString


-(id)initWithRequestId:(NSInteger)arg0 requestOptions:(NSUInteger)arg1 backgroundImage:(id)arg2 textImage:(id)arg3 travelTimeImage:(id)arg4 travelTimeString:(id)arg5 ;


@end


#endif