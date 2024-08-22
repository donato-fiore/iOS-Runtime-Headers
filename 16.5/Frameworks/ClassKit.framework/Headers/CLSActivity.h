// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSACTIVITY_H
#define CLSACTIVITY_H

@class NSDate, NSString, NSArray;
@protocol CLSRelationable;


#import "CLSObject.h"
#import "CLSActivityItem.h"

@interface CLSActivity : CLSObject <CLSRelationable>

 {
    BOOL _paused;
    NSDate *_activityStartDate;
    NSString *_primaryActivityItemIdentifier;
}


@property (readonly, nonatomic) NSArray *additionalActivityItems;
@property (nonatomic, getter=isBackgroudTimeTrackingEnabled) BOOL backgroundTimeTrackingEnabled; // ivar: _backgroundTimeTrackingEnabled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *parentEntityName; // ivar: _parentEntityName
@property (retain, nonatomic) CLSActivityItem *primaryActivityItem;
@property (copy, nonatomic) NSString *primaryActivityItemIdentifier;
@property (nonatomic) CGFloat progress;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)relations;
-(BOOL)_isObjectActivityItem:(id)arg0 withIdentifier:(id)arg1 ;
-(BOOL)_isObjectPrimaryItem:(id)arg0 ;
-(BOOL)isStarted;
-(BOOL)validatePrimaryActivityItemType:(id)arg0 ;
-(CGFloat)runningDelta;
-(NSInteger)effectiveAuthorizationStatus;
-(id)_init;
-(id)_initWithTargetClass:(Class)arg0 ;
-(id)activityItemWithIdentifier:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)_generatePartialTimeOnSave;
-(void)_generateTimeInterval;
-(void)addAdditionalActivityItem:(id)arg0 ;
-(void)addProgressRangeFromStart:(CGFloat)arg0 toEnd:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)pause;
-(void)removeAllActivityItems;
-(void)resume;
-(void)start;
-(void)stop;


@end


#endif