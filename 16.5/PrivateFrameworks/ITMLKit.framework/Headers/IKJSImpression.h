// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKJSIMPRESSION_H
#define IKJSIMPRESSION_H

@class NSArray, NSString, NSMutableArray;
@protocol NSObject, IKJSImpression, _IKJSImpressionProxy, _IKJSImpression;


#import "IKJSObject.h"
#import "IKJSImpression.h"

@interface IKJSImpression : IKJSObject <NSObject, IKJSImpression, _IKJSImpressionProxy, _IKJSImpression>



@property (readonly, nonatomic) NSArray *children;
@property (readonly, nonatomic) NSString *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *impressionQueueTag;
@property (readonly, nonatomic) NSInteger index;
@property (nonatomic) NSInteger indexInParent; // ivar: _indexInParent
@property (copy, nonatomic) NSString *metricsData; // ivar: _metricsData
@property (copy, nonatomic) NSString *metricsTag; // ivar: _metricsTag
@property (retain, nonatomic) NSMutableArray *mutableChildren; // ivar: _mutableChildren
@property (retain, nonatomic) NSMutableArray *mutableTimestamps; // ivar: _mutableTimestamps
@property (readonly, nonatomic) id *parent;
@property (weak, nonatomic) IKJSImpression *parentImpression; // ivar: _parentImpression
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *timestamps;


+(id)impressionsMapForViewElements:(id)arg0 appContext:(id)arg1 timestamp:(NSInteger)arg2 ;
+(id)impressionsMapForViewElements:(id)arg0 appContext:(id)arg1 timestamp:(NSInteger)arg2 existingImpressionsMap:(id)arg3 ;
-(id)asPrivateIKJSImpression;
-(id)initWithAppContext:(id)arg0 data:(id)arg1 index:(NSUInteger)arg2 queueTag:(id)arg3 ;
-(void)addChild:(id)arg0 ;
-(void)addTimestamp:(NSInteger)arg0 ;
-(void)linkReferences;


@end


#endif