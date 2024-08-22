// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CPBUTTONFEEDBACK_H
#define _CPBUTTONFEEDBACK_H

@class PBCodable, NSString, NSData;
@protocol _CPProcessableFeedback, _CPButtonFeedback, NSSecureCoding;



@interface _CPButtonFeedback : PBCodable <_CPProcessableFeedback, _CPButtonFeedback, NSSecureCoding>

 {
    NSUInteger _timestamp;
}


@property (copy, nonatomic) NSString *commandDetail; // ivar: _commandDetail
@property (nonatomic) int commandType; // ivar: _commandType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) NSUInteger uniqueId; // ivar: _uniqueId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)init;
-(void)writeTo:(id)arg0 ;


@end


#endif