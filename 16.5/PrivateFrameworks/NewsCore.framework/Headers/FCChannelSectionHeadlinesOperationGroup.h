// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCHANNELSECTIONHEADLINESOPERATIONGROUP_H
#define FCCHANNELSECTIONHEADLINESOPERATIONGROUP_H

@class NSArray;
@protocol FCSectionProviding;

#import <Foundation/Foundation.h>


@interface FCChannelSectionHeadlinesOperationGroup : NSObject

@property (retain, nonatomic) NSArray *headlines; // ivar: _headlines
@property (retain, nonatomic) NSObject<FCSectionProviding> *section; // ivar: _section


-(id)description;
-(id)init;
-(id)initWithSection:(id)arg0 headlines:(id)arg1 ;


@end


#endif