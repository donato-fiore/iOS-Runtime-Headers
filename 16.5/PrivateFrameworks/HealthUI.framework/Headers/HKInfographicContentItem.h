// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKINFOGRAPHICCONTENTITEM_H
#define HKINFOGRAPHICCONTENTITEM_H

@class NSString, NSAttributedString;
@protocol HKInfographicItem;

#import <Foundation/Foundation.h>


@interface HKInfographicContentItem : NSObject <HKInfographicItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSAttributedString *descriptionString; // ivar: _descriptionString
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSAttributedString *titleString; // ivar: _titleString


-(id)initWithTitle:(id)arg0 description:(id)arg1 ;


@end


#endif