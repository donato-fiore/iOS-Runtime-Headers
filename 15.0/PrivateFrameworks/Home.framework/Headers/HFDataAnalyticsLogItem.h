// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFDATAANALYTICSLOGITEM_H
#define HFDATAANALYTICSLOGITEM_H

@class NSString;
@protocol NAIdentifiable, HFMediaProfileContainer;


#import "HFItem.h"

@interface HFDataAnalyticsLogItem : HFItem <NAIdentifiable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer; // ivar: _mediaProfileContainer
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


+(id)na_identity;
-(BOOL)isDisplayDisabled;
-(BOOL)isEqual:(id)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)fetchLog;
-(id)init;
-(id)initWithMediaProfileContainer:(id)arg0 name:(id)arg1 ;


@end


#endif