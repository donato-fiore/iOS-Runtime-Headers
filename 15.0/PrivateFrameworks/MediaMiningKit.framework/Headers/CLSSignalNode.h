// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSSIGNALNODE_H
#define CLSSIGNALNODE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CLSSignalNode : NSObject

@property (readonly) CGFloat highPrecisionOperatingPoint; // ivar: _highPrecisionOperatingPoint
@property (readonly) CGFloat highRecallOperatingPoint; // ivar: _highRecallOperatingPoint
@property (readonly) NSUInteger identifier; // ivar: _identifier
@property (readonly) NSString *name; // ivar: _name
@property (readonly) CGFloat operatingPoint; // ivar: _operatingPoint


-(BOOL)failsHighPrecisionWithConfidence:(CGFloat)arg0 ;
-(BOOL)failsHighPrecisionWithSignal:(id)arg0 ;
-(BOOL)failsHighRecallWithConfidence:(CGFloat)arg0 ;
-(BOOL)failsHighRecallWithSignal:(id)arg0 ;
-(BOOL)failsWithConfidence:(CGFloat)arg0 ;
-(BOOL)failsWithSignal:(id)arg0 ;
-(BOOL)passesHighPrecisionWithConfidence:(CGFloat)arg0 ;
-(BOOL)passesHighPrecisionWithSignal:(id)arg0 ;
-(BOOL)passesHighRecallWithConfidence:(CGFloat)arg0 ;
-(BOOL)passesHighRecallWithSignal:(id)arg0 ;
-(BOOL)passesWithConfidence:(CGFloat)arg0 ;
-(BOOL)passesWithSignal:(id)arg0 ;
-(id)initWithIdentifier:(NSUInteger)arg0 name:(id)arg1 operatingPoint:(CGFloat)arg2 highPrecisionOperatingPoint:(CGFloat)arg3 highRecallOperatingPoint:(CGFloat)arg4 ;
-(id)signalInfoWithIsHierarchical:(BOOL)arg0 ;


@end


#endif