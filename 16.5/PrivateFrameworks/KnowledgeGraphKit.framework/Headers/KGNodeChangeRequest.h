// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KGNODECHANGEREQUEST_H
#define KGNODECHANGEREQUEST_H

@class NSDictionary;
@protocol KGNode;

#import <Foundation/Foundation.h>


@interface KGNodeChangeRequest : NSObject

@property (readonly, nonatomic) NSObject<KGNode> *node; // ivar: _node
@property (readonly, nonatomic) NSDictionary *properties; // ivar: _properties


-(id)initWithNode:(id)arg0 properties:(id)arg1 ;


@end


#endif