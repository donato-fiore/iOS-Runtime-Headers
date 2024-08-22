// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXCOMPONENTINSERTERMANAGER_H
#define SXCOMPONENTINSERTERMANAGER_H

@class NSString, NSArray, NSMutableArray;
@protocol SXComponentInserterManager;

#import <Foundation/Foundation.h>


@interface SXComponentInserterManager : NSObject <SXComponentInserterManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *inserters;
@property (readonly, nonatomic) NSMutableArray *mutableInserters; // ivar: _mutableInserters
@property (readonly) Class superclass;


-(id)init;
-(void)addInserter:(id)arg0 ;
-(void)removeInserter:(id)arg0 ;


@end


#endif