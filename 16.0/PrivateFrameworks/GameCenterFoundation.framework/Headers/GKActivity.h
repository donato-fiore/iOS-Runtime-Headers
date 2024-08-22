// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKACTIVITY_H
#define GKACTIVITY_H

@class NSString;
@protocol OS_os_activity;

#import <Foundation/Foundation.h>


@interface GKActivity : NSObject

@property (retain, nonatomic) NSObject<OS_os_activity> *activity; // ivar: _activity
@property (nonatomic) unsigned int mode; // ivar: _mode
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSObject<OS_os_activity> *parent; // ivar: _parent


+(id)currentOrNew;
+(id)detached;
+(id)named:(id)arg0 ;
+(void)execute:(id)arg0 ;
+(void)named:(id)arg0 execute:(id)arg1 ;
-(id)child;
-(id)initWithName:(id)arg0 parent:(id)arg1 mode:(unsigned int)arg2 ;
-(id)named:(id)arg0 ;
-(void)createActivity;
-(void)execute:(id)arg0 ;
-(void)named:(id)arg0 execute:(id)arg1 ;


@end


#endif