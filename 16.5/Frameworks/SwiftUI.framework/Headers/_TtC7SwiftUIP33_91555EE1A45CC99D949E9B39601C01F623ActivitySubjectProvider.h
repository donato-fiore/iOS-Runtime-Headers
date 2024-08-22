// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7SWIFTUIP33_91555EE1A45CC99D949E9B39601C01F623ACTIVITYSUBJECTPROVIDER_H
#define _TTC7SWIFTUIP33_91555EE1A45CC99D949E9B39601C01F623ACTIVITYSUBJECTPROVIDER_H

@protocol UIActivityItemSource;

#import <Foundation/Foundation.h>


@interface _TtC7SwiftUIP33_91555EE1A45CC99D949E9B39601C01F623ActivitySubjectProvider : NSObject <UIActivityItemSource>

 {
    ? item;
    ? subject;
}




-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 subjectForActivityType:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)init;


@end


#endif