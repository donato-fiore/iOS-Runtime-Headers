// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKACTIVITYITEMPROVIDER_H
#define PKACTIVITYITEMPROVIDER_H

@class UIActivityItemProvider, PKPass;


#import "PKPassView.h"
#import "PKLinkedApplication.h"

@interface PKActivityItemProvider : UIActivityItemProvider {
    PKPass *_pass;
    PKPassView *_passView;
    PKLinkedApplication *_linkedApp;
    NSInteger _sharingMethod;
}




-(id)activityViewController:(id)arg0 dataTypeIdentifierForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 subjectForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 thumbnailImageForActivityType:(id)arg1 suggestedSize:(struct CGSize )arg2 ;
-(id)activityViewControllerLinkMetadata:(id)arg0 ;
-(id)initWithPass:(id)arg0 passView:(id)arg1 linkedApp:(id)arg2 sharingMethod:(NSInteger)arg3 ;
-(id)item;


@end


#endif