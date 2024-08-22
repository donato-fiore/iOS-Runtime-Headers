// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARPHOMECONTROLCORRELATIONUTILITIES_H
#define ARPHOMECONTROLCORRELATIONUTILITIES_H

@protocol _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>


@interface ARPHomeControlCorrelationUtilities : NSObject

@property (readonly, nonatomic) NSObject<_DKKnowledgeQuerying> *knowledgeStore; // ivar: _knowledgeStore


-(BOOL)writeArchive:(id)arg0 toFilePath:(id)arg1 ;
-(id)firstHomeKitEventsWithPredicate:(id)arg0 sortStartDateAscending:(BOOL)arg1 ;
-(id)homeKitAccessoriesWithPredicate:(id)arg0 sortStartDateAscending:(BOOL)arg1 limit:(NSInteger)arg2 ;
-(id)homeKitEventsWithPredicate:(id)arg0 sortStartDateAscending:(BOOL)arg1 ;
-(id)homeKitScenesWithPredicate:(id)arg0 sortStartDateAscending:(BOOL)arg1 limit:(NSInteger)arg2 ;
-(id)initWithKnowledgeStore:(id)arg0 ;


@end


#endif