// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUARTICLEACTIVITYITEMSOURCE_H
#define NUARTICLEACTIVITYITEMSOURCE_H

@class NSString;
@protocol UIActivityItemSource, FCHeadlineProviding;

#import <Foundation/Foundation.h>


@interface NUArticleActivityItemSource : NSObject <UIActivityItemSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<FCHeadlineProviding> *headline; // ivar: _headline
@property (readonly) Class superclass;


-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)initWithHeadline:(id)arg0 ;


@end


#endif