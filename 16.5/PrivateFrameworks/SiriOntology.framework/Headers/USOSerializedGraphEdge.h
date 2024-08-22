// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef USOSERIALIZEDGRAPHEDGE_H
#define USOSERIALIZEDGRAPHEDGE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface USOSerializedGraphEdge : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *edgeLabel; // ivar: _edgeLabel
@property unsigned int enumeration; // ivar: _enumeration
@property NSUInteger fromVertex; // ivar: _fromVertex
@property NSUInteger toVertex; // ivar: _toVertex
@property int usoElementId; // ivar: _usoElementId


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUsoElementId:(int)arg0 fromVertex:(NSUInteger)arg1 toVertex:(NSUInteger)arg2 enumeration:(unsigned int)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif