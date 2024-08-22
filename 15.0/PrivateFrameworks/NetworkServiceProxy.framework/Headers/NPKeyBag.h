// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKEYBAG_H
#define NPKEYBAG_H

@class NSArray, NSDictionary, NSData, NSPredicate;

#import <Foundation/Foundation.h>


@interface NPKeyBag : NSObject

@property (nonatomic) NSInteger TFOStatusOverride; // ivar: _TFOStatusOverride
@property NSInteger fallbackReason; // ivar: _fallbackReason
@property (nonatomic) unsigned int generation; // ivar: _generation
@property unsigned int index; // ivar: _index
@property (retain, nonatomic) NSArray *keys; // ivar: _keys
@property (nonatomic) CGFloat lastUsedTimestamp; // ivar: _lastUsedTimestamp
@property (retain) NSArray *onRampList; // ivar: _onRampList
@property (retain) NSDictionary *onRampMap; // ivar: _onRampMap
@property (readonly) CGFloat timeSinceLastUsed;
@property (retain, nonatomic) NSData *updateHash; // ivar: _updateHash
@property (retain) NSPredicate *validOnRampPredicate; // ivar: _validOnRampPredicate
@property (retain) NSPredicate *validOnRampWithTFOPredicate; // ivar: _validOnRampWithTFOPredicate


-(BOOL)updateHashMatchesEdgeSet:(id)arg0 ;
-(id)copyUsableOnRamps:(BOOL)arg0 requireTFO:(BOOL)arg1 ;
-(id)data;
-(id)getOnRampForEndpoint:(id)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithOnRamps:(id)arg0 currentNetworkInfo:(id)arg1 currentEdgeIndex:(NSInteger)arg2 currentEdgeList:(id)arg3 generation:(unsigned int)arg4 identifier:(id)arg5 updateHash:(id)arg6 ;
-(void)createOnRamps;
-(void)logWithMessage:(id)arg0 identifier:(id)arg1 ;
-(void)moveToNextOnRamp;
-(void)moveToOnRamp:(id)arg0 ;
-(void)removeIPv6Keys;


@end


#endif