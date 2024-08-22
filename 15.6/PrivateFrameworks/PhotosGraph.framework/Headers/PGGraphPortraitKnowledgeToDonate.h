// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHPORTRAITKNOWLEDGETODONATE_H
#define PGGRAPHPORTRAITKNOWLEDGETODONATE_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface PGGraphPortraitKnowledgeToDonate : NSObject

@property (readonly, nonatomic) NSArray *locationNamedEntities; // ivar: _locationNamedEntities
@property (readonly, nonatomic) NSArray *namedEntities; // ivar: _namedEntities
@property (readonly, nonatomic) NSDictionary *topics; // ivar: _topics


-(id)initWithTopics:(id)arg0 namedEntities:(id)arg1 locationNamedEntities:(id)arg2 ;


@end


#endif