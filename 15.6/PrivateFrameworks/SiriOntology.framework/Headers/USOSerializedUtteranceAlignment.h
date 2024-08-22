// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef USOSERIALIZEDUTTERANCEALIGNMENT_H
#define USOSERIALIZEDUTTERANCEALIGNMENT_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface USOSerializedUtteranceAlignment : NSObject <NSSecureCoding>



@property unsigned int asrHypothesisIndex; // ivar: _asrHypothesisIndex
@property NSUInteger nodeIndex; // ivar: _nodeIndex
@property (retain, nonatomic) NSArray *spans; // ivar: _spans


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNodeIndex:(NSUInteger)arg0 asrHypothesisIndex:(unsigned int)arg1 spans:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif