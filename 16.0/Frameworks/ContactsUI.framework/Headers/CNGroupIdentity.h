// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNGROUPIDENTITY_H
#define CNGROUPIDENTITY_H

@class NSArray, NSString, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CNGroupIdentity : NSObject <NSCopying>



@property (retain, nonatomic) NSArray *contacts; // ivar: _contacts
@property (retain, nonatomic) NSString *groupName; // ivar: _groupName
@property (retain, nonatomic) NSData *groupPhoto; // ivar: _groupPhoto
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger numberOfContacts;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initGroupWithName:(id)arg0 photo:(id)arg1 contacts:(id)arg2 ;
-(id)initGroupWithName:(id)arg0 photo:(id)arg1 contacts:(id)arg2 identifier:(id)arg3 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)updateContacts:(id)arg0 ;
-(void)updateGroupName:(id)arg0 ;
-(void)updateGroupPhoto:(id)arg0 ;


@end


#endif