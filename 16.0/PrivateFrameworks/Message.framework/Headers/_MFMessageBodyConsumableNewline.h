// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MFMESSAGEBODYCONSUMABLENEWLINE_H
#define _MFMESSAGEBODYCONSUMABLENEWLINE_H

@class NSString;
@protocol MFMessageBodyConsumableInnerTextNode;

#import <Foundation/Foundation.h>


@interface _MFMessageBodyConsumableNewline : NSObject <MFMessageBodyConsumableInnerTextNode>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg0 ;


@end


#endif