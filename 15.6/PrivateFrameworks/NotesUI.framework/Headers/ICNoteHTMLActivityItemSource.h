// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICNOTEHTMLACTIVITYITEMSOURCE_H
#define ICNOTEHTMLACTIVITYITEMSOURCE_H

@class NSString, ICNote;
@protocol UIActivityItemSource;

#import <Foundation/Foundation.h>


@interface ICNoteHTMLActivityItemSource : NSObject <UIActivityItemSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ICNote *note; // ivar: _note
@property (readonly) Class superclass;


-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 subjectForActivityType:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)init;
-(id)initWithNote:(id)arg0 ;


@end


#endif