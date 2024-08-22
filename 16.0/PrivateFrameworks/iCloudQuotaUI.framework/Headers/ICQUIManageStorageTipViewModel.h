// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQUIMANAGESTORAGETIPVIEWMODEL_H
#define ICQUIMANAGESTORAGETIPVIEWMODEL_H

@class NSString, NSURL, AMSUIMessageRequest;

#import <Foundation/Foundation.h>


@interface ICQUIManageStorageTipViewModel : NSObject {
    NSString *_title;
    NSString *_subTitle;
    NSString *_systemIconName;
    NSString *_actionTitle;
    NSString *_actionIdentifier;
    NSString *_sectionID;
    NSString *_systemColor;
    NSURL *_deepLink;
}


@property (readonly, copy, nonatomic) AMSUIMessageRequest *request;


-(id)initWithSectionAttributes:(id)arg0 ;


@end


#endif