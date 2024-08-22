// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICNOTEBASEACTIVITYITEMSOURCE_H
#define ICNOTEBASEACTIVITYITEMSOURCE_H

@class NSString;
@protocol UIActivityItemSourceAttachment;

#import <Foundation/Foundation.h>


@interface ICNoteBaseActivityItemSource : NSObject <UIActivityItemSourceAttachment>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)activityViewController:(id)arg0 attachmentNameForActivityType:(id)arg1 ;
-(id)initWithTitle:(id)arg0 ;


@end


#endif