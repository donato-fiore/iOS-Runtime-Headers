// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STATEDATA_H
#define STATEDATA_H

@class NSString, NSMutableArray, NSURL;

#import <Foundation/Foundation.h>


@interface StateData : NSObject

@property (retain, nonatomic) NSString *blockTitle; // ivar: _blockTitle
@property (retain, nonatomic) NSMutableArray *conferenceDetails; // ivar: _conferenceDetails
@property (retain, nonatomic) NSString *conferenceTitle; // ivar: _conferenceTitle
@property (nonatomic) _NSRange endRange; // ivar: _endRange
@property (nonatomic) BOOL joinMethodIsBroadcast; // ivar: _joinMethodIsBroadcast
@property (retain, nonatomic) NSString *joinMethodTitle; // ivar: _joinMethodTitle
@property (retain, nonatomic) NSURL *joinMethodURL; // ivar: _joinMethodURL
@property (retain, nonatomic) NSMutableArray *joinMethods; // ivar: _joinMethods
@property (retain, nonatomic) NSMutableArray *ranges; // ivar: _ranges
@property (nonatomic) _NSRange startRange; // ivar: _startRange
@property (nonatomic) NSUInteger state; // ivar: _state


-(id)description;
-(id)init;
-(void)resetToNewSection;


@end


#endif