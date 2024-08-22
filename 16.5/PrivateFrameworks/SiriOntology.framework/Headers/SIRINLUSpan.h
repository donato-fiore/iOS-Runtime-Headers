// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUSPAN_H
#define SIRINLUSPAN_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "USOSerializedGraph.h"

@interface SIRINLUSpan : NSObject <NSSecureCoding>



@property unsigned int endTokenIndex; // ivar: _endTokenIndex
@property (retain, nonatomic) NSString *input; // ivar: _input
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSArray *matcherNames; // ivar: _matcherNames
@property CGFloat score; // ivar: _score
@property unsigned int startTokenIndex; // ivar: _startTokenIndex
@property (retain, nonatomic) USOSerializedGraph *usoGraph; // ivar: _usoGraph


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLabel:(id)arg0 input:(id)arg1 startTokenIndex:(unsigned int)arg2 endTokenIndex:(unsigned int)arg3 usoGraph:(id)arg4 score:(CGFloat)arg5 matcherNames:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif