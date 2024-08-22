// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMME_H
#define IMME_H

@class NSString, NSArray, NSMutableArray, CNContact;

#import <Foundation/Foundation.h>

#import "IMHandle.h"

@interface IMMe : NSObject {
    NSString *_cnNickname;
    NSString *_cnFirstName;
    NSString *_cnFullName;
    NSString *_cnLastName;
    NSArray *_cnEmails;
    NSMutableArray *_cnIMHandles;
    NSMutableArray *_loginIMHandles;
}


@property (readonly, nonatomic) IMHandle *bestIMHandle;
@property (readonly, nonatomic) CNContact *cnContact; // ivar: _cnContact
@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSArray *emails;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSArray *imHandles;
@property (readonly, nonatomic) NSString *lastName;
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
-(id)loginIMHandles;
-(void)myPictureChanged;
-(void)rebuildIMHandles;
-(void)resetABPerson;
-(void)setCNContact:(id)arg0 ;


@end


#endif