// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
-(void)trackNewPersons:(id)arg0 knownPersons:(id)arg1 regionOfInterest:(struct CGRect )arg2 timeStamp:(struct ? )arg3 ;


@end


#endif