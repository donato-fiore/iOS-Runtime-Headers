// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIPERSONTRACKER_H
#define HMIPERSONTRACKER_H

@class HMFObject, NSString, NSMutableArray;
@protocol HMFLogging;



@interface HMIPersonTracker : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSMutableArray *previousPersons; // ivar: _previousPersons
@property (readonly) Class superclass;


+(id)logCategory;
-(id)getBlobIDAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(void)setBlobID:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)trackNewPersons:(id)arg0 regionOfInterest:(struct CGRect )arg1 timeStamp:(struct ? )arg2 ;


@end


#endif