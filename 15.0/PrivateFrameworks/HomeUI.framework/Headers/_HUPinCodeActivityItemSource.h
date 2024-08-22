// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HUPINCODEACTIVITYITEMSOURCE_H
#define _HUPINCODEACTIVITYITEMSOURCE_H

@class NSString, HFPinCodeItem;
@protocol UIActivityItemSource;

#import <Foundation/Foundation.h>


@interface _HUPinCodeActivityItemSource : NSObject <UIActivityItemSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFPinCodeItem *pinCodeItem; // ivar: _pinCodeItem
@property (readonly) Class superclass;


-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewControllerLinkMetadata:(id)arg0 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)initWithPinCodeItem:(id)arg0 ;


@end


#endif