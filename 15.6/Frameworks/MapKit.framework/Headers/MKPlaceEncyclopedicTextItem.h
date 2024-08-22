// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPLACEENCYCLOPEDICTEXTITEM_H
#define MKPLACEENCYCLOPEDICTEXTITEM_H

@class NSString;
@protocol MKPlaceEncyclopedicRowViewItem;

#import <Foundation/Foundation.h>


@interface MKPlaceEncyclopedicTextItem : NSObject <MKPlaceEncyclopedicRowViewItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *label; // ivar: label
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *value; // ivar: value


+(id)textItemWithLabel:(id)arg0 value:(id)arg1 ;


@end


#endif