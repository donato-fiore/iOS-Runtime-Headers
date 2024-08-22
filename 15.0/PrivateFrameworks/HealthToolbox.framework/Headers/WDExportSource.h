// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDEXPORTSOURCE_H
#define WDEXPORTSOURCE_H

@class NSString, NSURL;
@protocol UIActivityItemSource;

#import <Foundation/Foundation.h>


@interface WDExportSource : NSObject <UIActivityItemSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *subject; // ivar: _subject
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 subjectForActivityType:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;


@end


#endif