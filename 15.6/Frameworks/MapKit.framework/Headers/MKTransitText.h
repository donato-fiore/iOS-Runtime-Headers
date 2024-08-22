// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKTRANSITTEXT_H
#define MKTRANSITTEXT_H

@class NSString;
@protocol GEOTransitTextDataSource, GEOServerFormattedString;

#import <Foundation/Foundation.h>


@interface MKTransitText : NSObject <GEOTransitTextDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *text; // ivar: _text


-(id)initWithFormattedString:(id)arg0 ;


@end


#endif