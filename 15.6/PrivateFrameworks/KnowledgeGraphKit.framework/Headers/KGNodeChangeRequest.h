// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KGNODECHANGEREQUEST_H
#define KGNODECHANGEREQUEST_H

@class NSDictionary, NSNumber;
@protocol KGNode;

#import <Foundation/Foundation.h>


@interface KGNodeChangeRequest : NSObject

@property (readonly, nonatomic) NSObject<KGNode> *node; // ivar: _node
@property (readonly, nonatomic) NSDictionary *properties; // ivar: _properties
@property (readonly, nonatomic) NSNumber *weight; // ivar: _weight


-(id)initWithNode:(id)arg0 weight:(id)arg1 properties:(id)arg2 ;


@end


#endif