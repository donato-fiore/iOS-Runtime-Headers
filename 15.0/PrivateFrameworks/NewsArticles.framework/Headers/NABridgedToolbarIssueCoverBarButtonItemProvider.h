// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NABRIDGEDTOOLBARISSUECOVERBARBUTTONITEMPROVIDER_H
#define NABRIDGEDTOOLBARISSUECOVERBARBUTTONITEMPROVIDER_H

@protocol NABridgedToolbarIssueCoverBarButtonItemProviderType;

#import <Foundation/Foundation.h>


@interface NABridgedToolbarIssueCoverBarButtonItemProvider : NSObject <NABridgedToolbarIssueCoverBarButtonItemProviderType>

 {
    ? resolver;
    ? bridgedActionHandler;
    ? barPageItem;
}




-(id)barButtonItemForIssue:(id)arg0 toolbarFrame:(struct CGRect )arg1 shouldAddBottomPadding:(BOOL)arg2 ;
-(id)init;
-(id)initWithResolver:(id)arg0 bridgedActionHandler:(id)arg1 ;


@end


#endif