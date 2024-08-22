// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKCONCRETEIDSACCOUNT_H
#define CRKCONCRETEIDSACCOUNT_H

@class IDSAccount, NSString;
@protocol IDSAccountDelegate, CRKIDSAccount;

#import <Foundation/Foundation.h>


@interface CRKConcreteIDSAccount : NSObject <IDSAccountDelegate, CRKIDSAccount>



@property (retain, nonatomic) IDSAccount *account; // ivar: _account
@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *loginID;
@property (readonly) Class superclass;


-(id)initWithAccount:(id)arg0 ;
-(void)account:(id)arg0 isActiveChanged:(BOOL)arg1 ;
-(void)updateIsActive;
-(void)updateWithAccount:(id)arg0 ;


@end


#endif