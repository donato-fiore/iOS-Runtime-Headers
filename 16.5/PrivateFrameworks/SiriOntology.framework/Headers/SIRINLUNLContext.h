// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUNLCONTEXT_H
#define SIRINLUNLCONTEXT_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SIRINLUNLContext : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *activeTasks; // ivar: _activeTasks
@property (retain, nonatomic) NSArray *executedTasks; // ivar: _executedTasks
@property (retain, nonatomic) NSArray *salientEntities; // ivar: _salientEntities
@property (retain, nonatomic) NSArray *systemDialogActs; // ivar: _systemDialogActs


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSystemDialogActs:(id)arg0 activeTasks:(id)arg1 executedTasks:(id)arg2 ;
-(id)initWithSystemDialogActs:(id)arg0 activeTasks:(id)arg1 executedTasks:(id)arg2 salientEntities:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif