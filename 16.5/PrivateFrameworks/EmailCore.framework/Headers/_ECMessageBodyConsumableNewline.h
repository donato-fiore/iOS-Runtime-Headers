// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ECMESSAGEBODYCONSUMABLENEWLINE_H
#define _ECMESSAGEBODYCONSUMABLENEWLINE_H

@class NSString;
@protocol ECMessageBodyConsumableInnerTextNode;

#import <Foundation/Foundation.h>


@interface _ECMessageBodyConsumableNewline : NSObject <ECMessageBodyConsumableInnerTextNode>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg0 ;


@end


#endif