// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUMUTABLEWARNINGSET_H
#define TSUMUTABLEWARNINGSET_H

@class NSMutableSet, NSSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TSUMutableWarningSet : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_warnings;
}


@property (readonly, nonatomic) NSSet *allWarnings;
@property (readonly) NSUInteger count;


-(BOOL)containsWarningPassingTest:(id)arg0 ;
-(BOOL)hasWarningsOfKind:(NSInteger)arg0 ;
-(id)init;
-(id)initWithSet:(id)arg0 ;
-(id)popAllWarnings;
-(id)popAllWarningsIfContainsWarningPassingTest:(id)arg0 ;
-(id)warningsOfKind:(NSInteger)arg0 ;
-(id)warningsPassingTest:(id)arg0 ;
-(void)addWarning:(id)arg0 ;
-(void)unionSet:(id)arg0 ;


@end


#endif