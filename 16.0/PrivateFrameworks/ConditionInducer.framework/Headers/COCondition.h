// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COCONDITION_H
#define COCONDITION_H

@class NSArray, NSString;
@protocol COConditionProtocol;

#import <Foundation/Foundation.h>


@interface COCondition : NSObject <COConditionProtocol>



@property (readonly) BOOL active;
@property (retain, nonatomic) NSArray *additionalArguments; // ivar: _additionalArguments
@property (readonly) NSString *identifierName;
@property (readonly) BOOL isDestructive;
@property (readonly) BOOL isInternalOnly;
@property (readonly) BOOL persistsAfterReboot;
@property (readonly) NSString *userFriendlyName;


+(id)description;
+(id)info;
+(id)profileFriendlyName;
-(BOOL)getBoolProperty:(id)arg0 fromDict:(id)arg1 withDefault:(BOOL)arg2 ;
-(BOOL)getBoolProperty:(id)arg0 withDefault:(BOOL)arg1 ;
-(BOOL)isDestructiveFromDict:(id)arg0 ;
-(BOOL)isInternalOnlyFromDict:(id)arg0 ;
-(BOOL)persistsAfterRebootFromDict:(id)arg0 ;
-(BOOL)setUp;
-(id)getStringProperty:(id)arg0 fromDict:(id)arg1 withDefault:(id)arg2 ;
-(id)getStringProperty:(id)arg0 withDefault:(id)arg1 ;
-(id)identifierNameFromDict:(id)arg0 ;
-(id)init;
-(id)userFriendlyNameFromDict:(id)arg0 ;
-(void)tearDown;


@end


#endif