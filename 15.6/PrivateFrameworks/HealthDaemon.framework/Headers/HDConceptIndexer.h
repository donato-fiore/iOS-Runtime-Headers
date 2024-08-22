// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCONCEPTINDEXER_H
#define HDCONCEPTINDEXER_H

@class NSString;
@protocol HDConceptIndexer;

#import <Foundation/Foundation.h>


@interface HDConceptIndexer : NSObject <HDConceptIndexer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)indexSamplesForProfile:(id)arg0 limit:(NSUInteger)arg1 outIndexedSamplesCount:(*NSInteger)arg2 error:(*id)arg3 ;
+(BOOL)resetIndexManagerStateForProfile:(id)arg0 withError:(*id)arg1 ;
+(BOOL)storeState:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)stateWithTransaction:(id)arg0 error:(*id)arg1 ;
-(id)init;


@end


#endif