// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNUIUSERACTIONCURATOR_H
#define _CNUIUSERACTIONCURATOR_H

@class CNContactStore, NSString;
@protocol CNUIUserActionCurator, CNLSApplicationWorkspace;

#import <Foundation/Foundation.h>


@interface _CNUIUserActionCurator : NSObject <CNUIUserActionCurator>



@property (retain, nonatomic) NSObject<CNLSApplicationWorkspace> *applicationWorkspace; // ivar: _applicationWorkspace
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)curateUserAction:(id)arg0 ;
-(id)curateUserAction:(id)arg0 withKeysToFetch:(id)arg1 ;
-(id)initWithContactStore:(id)arg0 applicationWorkspace:(id)arg1 ;


@end


#endif