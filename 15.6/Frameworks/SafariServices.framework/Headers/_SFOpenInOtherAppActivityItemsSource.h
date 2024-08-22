// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFOPENINOTHERAPPACTIVITYITEMSSOURCE_H
#define _SFOPENINOTHERAPPACTIVITYITEMSSOURCE_H

@class NSURL, NSString;
@protocol UIActivityItemsSource;

#import <Foundation/Foundation.h>


@interface _SFOpenInOtherAppActivityItemsSource : NSObject <UIActivityItemsSource>

 {
    NSURL *_fileURL;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)activityViewController:(id)arg0 itemsForActivityType:(id)arg1 ;
-(id)activityViewControllerPlaceholderItems:(id)arg0 ;
-(id)initWithFilePath:(id)arg0 ;


@end


#endif