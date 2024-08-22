// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGPEOPLEVISITINGVISIT_H
#define PGPEOPLEVISITINGVISIT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PGGraphAddressNode.h"

@interface PGPeopleVisitingVisit : NSObject {
    BOOL _hasVeryCloseMoments;
}


@property (readonly) PGGraphAddressNode *addressNode; // ivar: _addressNode
@property (readonly) BOOL isValid;
@property (readonly) BOOL matchesCloseVisitCriteria;
@property (readonly) BOOL matchesFarVisitCriteria;
@property (readonly) NSArray *momentNodes; // ivar: _momentNodes


-(id)description;
-(id)initWithAddressNode:(id)arg0 ;
-(void)addMomentNode:(id)arg0 isVeryClose:(BOOL)arg1 ;


@end


#endif