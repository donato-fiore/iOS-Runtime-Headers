// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KGEDGECHANGEREQUEST_H
#define KGEDGECHANGEREQUEST_H

@class NSDictionary;
@protocol KGEdge;

#import <Foundation/Foundation.h>


@interface KGEdgeChangeRequest : NSObject

@property (readonly, nonatomic) NSObject<KGEdge> *edge; // ivar: _edge
@property (readonly, nonatomic) NSDictionary *properties; // ivar: _properties


-(id)initWithEdge:(id)arg0 properties:(id)arg1 ;


@end


#endif