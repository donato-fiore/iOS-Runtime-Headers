// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMME_H
#define IMME_H

@class CNContact, NSArray, NSString, NSMutableArray;

#import <Foundation/Foundation.h>

#import "IMHandle.h"

@interface IMMe : NSObject

@property (readonly, nonatomic) IMHandle *bestIMHandle;
@property (retain, nonatomic) CNContact *cnContact; // ivar: _cnContact
@property (retain, nonatomic) NSArray *cnEmails; // ivar: _cnEmails
@property (retain, nonatomic) NSString *cnFirstName; // ivar: _cnFirstName
@property (retain, nonatomic) NSString *cnFullName; // ivar: _cnFullName
@property (retain, nonatomic) NSMutableArray *cnIMHandles; // ivar: _cnIMHandles
@property (retain, nonatomic) NSString *cnLastName; // ivar: _cnLastName
@property (retain, nonatomic) NSString *cnNickname; // ivar: _cnNickname
@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSArray *emails;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSArray *imHandles;
@property (readonly, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSMutableArray *loginIMHandles; // ivar: _loginIMHandles
@property (readonly, nonatomic) NSString *nickname;


+(id)fallbackUserName;
+(id)imHandleForService:(id)arg0 ;
+(id)me;
-(BOOL)addIMHandle:(id)arg0 ;
-(BOOL)addLoginIMHandle:(id)arg0 ;
-(BOOL)isIMHandleLoginIMHandle:(id)arg0 ;
-(BOOL)removeIMHandle:(id)arg0 ;
-(BOOL)removeLoginIMHandle:(id)arg0 ;
-(id)_imHandlesWithIDs:(id)arg0 onAccount:(id)arg1 ;
-(id)description;
-(id)init;
-(void)myPictureChanged;
-(void)rebuildIMHandles;
-(void)resetABPerson;
-(void)setCNContact:(id)arg0 ;


@end


#endif