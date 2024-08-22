// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGBABY_H
#define PGBABY_H

@class NSMutableSet, NSString;
@protocol PGGraphIngestBaby;

#import <Foundation/Foundation.h>


@interface PGBaby : NSObject <PGGraphIngestBaby>



@property (readonly, nonatomic) NSMutableSet *caretakerNodes; // ivar: _caretakerNodes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableSet *momentNodes; // ivar: _momentNodes
@property (readonly) Class superclass;


-(id)initWithMomentNodes:(id)arg0 caretakerNodes:(id)arg1 ;


@end


#endif