// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXINFORMATIONHEURISTICREFRESHTRIGGER_H
#define ATXINFORMATIONHEURISTICREFRESHTRIGGER_H

@class NSMutableSet, NSSet;
@protocol NSSecureCoding, ATXInformationHeuristicRefreshTriggerDelegate;

#import <Foundation/Foundation.h>


@interface ATXInformationHeuristicRefreshTrigger : NSObject <NSSecureCoding>

 {
    NSMutableSet *_registeredHeuristics;
}


@property (weak, nonatomic) NSObject<ATXInformationHeuristicRefreshTriggerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSSet *registeredHeuristics;


+(BOOL)supportsSecureCoding;
-(id)_safeDecodeObjectOfClass:(Class)arg0 forKey:(id)arg1 withCoder:(id)arg2 nonNull:(BOOL)arg3 ;
-(id)_safeDecodeObjectOfClasses:(id)arg0 forKey:(id)arg1 withCoder:(id)arg2 nonNull:(BOOL)arg3 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_start;
-(void)_stop;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)startTriggeringRefreshForHeuristicIfNotAlready:(id)arg0 ;
-(void)stopTriggeringRefreshForAllHeuristics;
-(void)stopTriggeringRefreshForHeuristicIfAlready:(id)arg0 ;


@end


#endif