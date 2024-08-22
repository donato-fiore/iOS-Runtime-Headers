// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPXPCACTIVITY_H
#define HDSPXPCACTIVITY_H

@class NSString;
@protocol HDSPActivity, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface HDSPXPCActivity : NSObject <HDSPActivity>



@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity; // ivar: _activity
@property (readonly, nonatomic) NSObject<OS_xpc_object> *criteria; // ivar: _criteria
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly) Class superclass;


-(BOOL)deferIfNecessary;
-(id)initWithEventName:(id)arg0 options:(NSUInteger)arg1 criteria:(id)arg2 ;
-(id)initWithEventName:(id)arg0 options:(NSUInteger)arg1 criteria:(id)arg2 activity:(id)arg3 ;


@end


#endif