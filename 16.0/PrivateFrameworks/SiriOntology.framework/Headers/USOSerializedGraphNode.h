// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef USOSERIALIZEDGRAPHNODE_H
#define USOSERIALIZEDGRAPHNODE_H

@class NSString, NSNumber, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface USOSerializedGraphNode : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *entityLabel; // ivar: _entityLabel
@property (retain, nonatomic) NSNumber *integerPayload; // ivar: _integerPayload
@property (retain, nonatomic) NSArray *normalizedStringPayloads; // ivar: _normalizedStringPayloads
@property (retain, nonatomic) NSString *stringPayload; // ivar: _stringPayload
@property int usoElementId; // ivar: _usoElementId
@property (retain, nonatomic) NSNumber *usoVerbId; // ivar: _usoVerbId
@property (retain, nonatomic) NSString *verbLabel; // ivar: _verbLabel


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUsoElementId:(int)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif