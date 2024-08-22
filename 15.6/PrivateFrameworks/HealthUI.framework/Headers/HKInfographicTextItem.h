// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKINFOGRAPHICTEXTITEM_H
#define HKINFOGRAPHICTEXTITEM_H

@class NSString, NSAttributedString;
@protocol HKInfographicItem;

#import <Foundation/Foundation.h>


@interface HKInfographicTextItem : NSObject <HKInfographicItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSAttributedString *descriptionString; // ivar: _descriptionString
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDescription:(id)arg0 ;


@end


#endif