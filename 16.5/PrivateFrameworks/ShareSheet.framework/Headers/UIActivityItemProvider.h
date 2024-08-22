// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIACTIVITYITEMPROVIDER_H
#define UIACTIVITYITEMPROVIDER_H

@class NSOperation, NSString;
@protocol UIActivityItemSource;



@interface UIActivityItemProvider : NSOperation <UIActivityItemSource>



@property (copy, nonatomic, setter=_setActivityType:) NSString *activityType; // ivar: _activityType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *item;
@property (retain, nonatomic) id *placeholderItem; // ivar: _placeholderItem
@property (retain, nonatomic) id *providedItem; // ivar: _providedItem
@property (readonly) Class superclass;


-(BOOL)_shouldExecuteItemOperationForActivity:(id)arg0 ;
-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)init;
-(id)initWithPlaceholderItem:(id)arg0 ;
-(void)main;


@end


#endif