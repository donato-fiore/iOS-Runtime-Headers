// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KGEDGECHANGEREQUEST_H
#define KGEDGECHANGEREQUEST_H

@class NSDictionary, NSNumber;
@protocol KGEdge;

#import <Foundation/Foundation.h>


@interface KGEdgeChangeRequest : NSObject

@property (readonly, nonatomic) NSObject<KGEdge> *edge; // ivar: _edge
@property (readonly, nonatomic) NSDictionary *properties; // ivar: _properties
@property (readonly, nonatomic) NSNumber *weight; // ivar: _weight


-(id)initWithEdge:(id)arg0 weight:(id)arg1 properties:(id)arg2 ;


@end


#endif