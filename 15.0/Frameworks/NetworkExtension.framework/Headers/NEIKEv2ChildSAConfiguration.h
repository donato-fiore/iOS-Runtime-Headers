// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2CHILDSACONFIGURATION_H
#define NEIKEV2CHILDSACONFIGURATION_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NEIKEv2ChildSAConfiguration : NSObject <NSCopying>

 {
    NSArray *_proposals;
}


@property (retain) NSArray *localTrafficSelectors; // ivar: _localTrafficSelectors
@property NSUInteger mode; // ivar: _mode
@property BOOL preferInitiatorProposalOrder; // ivar: _preferInitiatorProposalOrder
@property (retain, nonatomic) NSArray *proposals;
@property (retain) NSArray *remoteTrafficSelectors; // ivar: _remoteTrafficSelectors
@property unsigned int replayWindowSize; // ivar: _replayWindowSize
@property BOOL sequencePerTrafficClass; // ivar: _sequencePerTrafficClass


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;


@end


#endif