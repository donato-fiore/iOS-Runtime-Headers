// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDGESELECTION_H
#define EDGESELECTION_H

@class NSMutableDictionary, NSNumber, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface EdgeSelection : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat alpha; // ivar: _alpha
@property (retain, nonatomic) NSMutableDictionary *edgeAttributesDict; // ivar: _edgeAttributesDict
@property (retain, nonatomic) NSNumber *interfaceType; // ivar: _interfaceType
@property (retain, nonatomic) NSData *networkSignature; // ivar: _networkSignature
@property (nonatomic) NSInteger trialCount; // ivar: _trialCount
@property (nonatomic) NSInteger windowSize; // ivar: _windowSize


+(BOOL)supportsSecureCoding;
-(CGFloat)_stochasticRewardFromRTT:(CGFloat)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNetworkSignature:(id)arg0 interfaceType:(id)arg1 modelParams:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getAttributesForEdge:(id)arg0 reply:(id)arg1 ;
-(void)getMinimumLatencyEdge:(id)arg0 ;
-(void)trainEdgeSelectionModel:(id)arg0 reply:(id)arg1 ;


@end


#endif