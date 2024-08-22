// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI26SHAREPDFACTIVITYITEMSOURCE_H
#define _TTC18HEALTHEXPERIENCEUI26SHAREPDFACTIVITYITEMSOURCE_H

@protocol UIActivityItemSource;

#import <Foundation/Foundation.h>


@interface _TtC18HealthExperienceUI26SharePDFActivityItemSource : NSObject <UIActivityItemSource>

 {
    ? pdfFileURL;
    ? pdfFilePath;
}




-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif