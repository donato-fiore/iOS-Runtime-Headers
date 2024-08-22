// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCONTENTATTRIBUTIONTRACKER_H
#define WFCONTENTATTRIBUTIONTRACKER_H

@class NSMutableDictionary;
@protocol NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFContentAttributionTracker : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSMutableDictionary *attributionSets; // ivar: _attributionSets
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *trackingAttributionSetQueue; // ivar: _trackingAttributionSetQueue


+(BOOL)supportsSecureCoding;
-(id)attributionSetForParameter:(id)arg0 ;
-(id)init;
-(id)initWithAttributionSets:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)trackedAttributionSet;
-(void)addAttributionSet:(id)arg0 forParameter:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif