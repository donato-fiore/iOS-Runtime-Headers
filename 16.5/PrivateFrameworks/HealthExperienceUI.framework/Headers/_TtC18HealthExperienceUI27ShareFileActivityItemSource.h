// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18HEALTHEXPERIENCEUI27SHAREFILEACTIVITYITEMSOURCE_H
#define _TTC18HEALTHEXPERIENCEUI27SHAREFILEACTIVITYITEMSOURCE_H

@protocol UIActivityItemSource;

#import <Foundation/Foundation.h>


@interface _TtC18HealthExperienceUI27ShareFileActivityItemSource : NSObject <UIActivityItemSource>

 {
    ? fileURL;
    ? filePath;
}




-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif