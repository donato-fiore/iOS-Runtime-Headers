// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTAGPROCESSORCREATOROBSERVER_H
#define HMMTAGPROCESSORCREATOROBSERVER_H

@class NSString;
@protocol HMMTagObserving;

#import <Foundation/Foundation.h>


@interface HMMTagProcessorCreatorObserver : NSObject <HMMTagObserving>



@property (readonly, nonatomic) id *creationBlock; // ivar: _creationBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)addObserverForStartTags:(id)arg0 usingCreatorBlock:(id)arg1 ;
-(id)initWithCreationBlock:(id)arg0 ;
-(void)observeTaggedEvent:(id)arg0 addProcessorBlock:(id)arg1 ;


@end


#endif