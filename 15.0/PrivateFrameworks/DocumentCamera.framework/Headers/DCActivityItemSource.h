// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DCACTIVITYITEMSOURCE_H
#define DCACTIVITYITEMSOURCE_H

@class NSString;
@protocol UIActivityItemSourceAttachment, UIActivityItemSource;

#import <Foundation/Foundation.h>

#import "ICDocCamDocumentInfoCollection.h"

@interface DCActivityItemSource : NSObject <UIActivityItemSourceAttachment, UIActivityItemSource>



@property (readonly, copy, nonatomic) NSString *attachmentTypeUTI;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) ICDocCamDocumentInfoCollection *docInfoCollection; // ivar: _docInfoCollection
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)activityViewController:(id)arg0 attachmentNameForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 dataTypeIdentifierForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)initWithDocumentInfoCollection:(id)arg0 ;


@end


#endif