// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FAFAMILYMEMBERDETAILSPAGESURROGATE_H
#define FAFAMILYMEMBERDETAILSPAGESURROGATE_H

@class UITableView, FAFamilyMember, AAUIProfilePictureStore, NSString;
@protocol UITableViewDelegate;

#import <Foundation/Foundation.h>


@interface FAFamilyMemberDetailsPageSurrogate : NSObject <UITableViewDelegate>

 {
    NSObject<UITableViewDelegate> *_remoteTableViewController;
    UITableView *_remoteTableView;
    FAFamilyMember *_familyMember;
    AAUIProfilePictureStore *_pictureStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(id)initWithPage:(id)arg0 forPerson:(id)arg1 account:(id)arg2 store:(id)arg3 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif