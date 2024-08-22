// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKDOMXPATHRESULT_H
#define IKDOMXPATHRESULT_H

@class NSArray, NSString;
@protocol IKJSDOMXPathResult;


#import "IKJSObject.h"
#import "IKDOMNode.h"

@interface IKDOMXPathResult : IKJSObject <IKJSDOMXPathResult>



@property (readonly, nonatomic) BOOL booleanValue;
@property (readonly, nonatomic) BOOL invalidIteratorState;
@property (copy, nonatomic) NSArray *nodes; // ivar: _nodes
@property (readonly, nonatomic) NSInteger numberValue;
@property (readonly, nonatomic) NSInteger resultType;
@property (readonly, weak, nonatomic) IKDOMNode *singleNodeValue;
@property (readonly, nonatomic) NSInteger snapshotLength;
@property (readonly, weak, nonatomic) NSString *stringValue;
@property NSInteger type; // ivar: _type


-(id)initWithAppContext:(id)arg0 type:(NSInteger)arg1 nodes:(id)arg2 ;
-(id)iterateNext;
-(id)snapshotItem:(NSInteger)arg0 ;


@end


#endif