// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMISIGNPOST_H
#define HMISIGNPOST_H

@class HMFObject, NSDate, NSString, NSUUID;
@protocol HMFLogging;



@interface HMISignpost : HMFObject <HMFLogging>



@property (readonly) NSDate *beginDate; // ivar: _beginDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly) NSUInteger signpostIdentifier; // ivar: _signpostIdentifier
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)hasBegun;
-(BOOL)shouldSignpost;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 deferred:(BOOL)arg1 ;
-(id)logIdentifier;
-(id)signpostLog;
-(void)begin;
-(void)end;


@end


#endif