// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIPACKAGECANDIDATERESULT_H
#define HMIPACKAGECANDIDATERESULT_H

@class HMFObject, NSArray;



@interface HMIPackageCandidateResult : HMFObject

@property (readonly) BOOL backgroundChanged; // ivar: _backgroundChanged
@property (readonly) NSArray *boxes; // ivar: _boxes


-(id)initWithBoxes:(id)arg0 backgroundChanged:(BOOL)arg1 ;


@end


#endif