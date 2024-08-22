// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSBUSINESSLINKCONTENTITEM_H
#define BCSBUSINESSLINKCONTENTITEM_H

@class NSString;
@protocol BCSBusinessLinkContentItemDescribing;

#import <Foundation/Foundation.h>

#import "BCSBusinessLinkContentItemModel.h"

@interface BCSBusinessLinkContentItem : NSObject <BCSBusinessLinkContentItemDescribing>

 {
    BCSBusinessLinkContentItemModel *_businessLinkContentItemModel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isDefault) BOOL isDefault;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;




@end


#endif