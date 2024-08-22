// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLDIFFTRACKER_H
#define CPLDIFFTRACKER_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface CPLDiffTracker : NSObject

@property (readonly, nonatomic) NSSet *differingProperties; // ivar: _differingProperties
@property (readonly, nonatomic) BOOL objectsAreTotallyDifferent; // ivar: _objectsAreTotallyDifferent
@property (nonatomic) BOOL shouldCompareAllProperties; // ivar: _shouldCompareAllProperties


-(BOOL)areObjectsDifferentOnProperty:(id)arg0 ;
-(id)description;
-(id)redactedDescription;
-(void)noteObjectAreTotallyDifferent;
-(void)noteObjectsDifferOnProperty:(id)arg0 ;


@end


#endif