// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXEMAILACTIONACTIVITYPROVIDER_H
#define SXEMAILACTIONACTIVITYPROVIDER_H

@class NSString;
@protocol SXActionActivityProvider, SXContactsPresenter, SXMailPresenter;

#import <Foundation/Foundation.h>


@interface SXEmailActionActivityProvider : NSObject <SXActionActivityProvider>



@property (readonly, nonatomic) NSObject<SXContactsPresenter> *contactsPresenter; // ivar: _contactsPresenter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXMailPresenter> *mailPresenter; // ivar: _mailPresenter
@property (readonly) Class superclass;


-(id)activityGroupForAction:(id)arg0 ;
-(id)initWithMailPresenter:(id)arg0 contactsPresenter:(id)arg1 ;
-(void)addToContacts:(id)arg0 ;
-(void)composeMailTo:(id)arg0 subject:(id)arg1 ;


@end


#endif