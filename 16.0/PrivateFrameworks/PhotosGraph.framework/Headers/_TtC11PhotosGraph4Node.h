// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11PHOTOSGRAPH4NODE_H
#define _TTC11PHOTOSGRAPH4NODE_H

@class NSSet, NSDictionary;
@protocol KGNode;

#import <Foundation/Foundation.h>


@interface _TtC11PhotosGraph4Node : NSObject <KGNode>

 {
    ? labels;
    ? properties;
}


@property (nonatomic) NSUInteger identifier; // ivar: identifier
@property (nonatomic, readonly) NSSet *labels;
@property (nonatomic, readonly) NSDictionary *properties;


-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithIdentifier:(NSUInteger)arg0 labels:(id)arg1 properties:(id)arg2 ;
-(void)resolveIdentifier:(NSUInteger)arg0 ;


@end


#endif