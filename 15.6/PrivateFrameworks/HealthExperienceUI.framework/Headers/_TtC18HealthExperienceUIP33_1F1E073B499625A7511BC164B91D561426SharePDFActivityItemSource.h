// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18HEALTHEXPERIENCEUIP33_1F1E073B499625A7511BC164B91D561426SHAREPDFACTIVITYITEMSOURCE_H
#define _TTC18HEALTHEXPERIENCEUIP33_1F1E073B499625A7511BC164B91D561426SHAREPDFACTIVITYITEMSOURCE_H

@protocol UIActivityItemSource;

#import <Foundation/Foundation.h>


@interface _TtC18HealthExperienceUIP33_1F1E073B499625A7511BC164B91D561426SharePDFActivityItemSource : NSObject <UIActivityItemSource>

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