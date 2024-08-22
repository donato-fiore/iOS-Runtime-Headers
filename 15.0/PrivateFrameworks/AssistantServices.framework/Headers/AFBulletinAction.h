// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFBULLETINACTION_H
#define AFBULLETINACTION_H

@class BBAction, NSString, NSMutableSet;

#import <Foundation/Foundation.h>


@interface AFBulletinAction : NSObject

@property (readonly, nonatomic) BBAction *bbAction; // ivar: _bbAction
@property (readonly, copy, nonatomic) NSString *bbActionID; // ivar: _bbActionID
@property (retain, nonatomic) NSMutableSet *titleVariants; // ivar: _titleVariants


-(id)getTitleVariants;
-(id)initWithBulletinAction:(id)arg0 ;
-(void)addTitleVariant:(id)arg0 ;


@end


#endif