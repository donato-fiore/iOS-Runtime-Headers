// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KGSNAPSHOTNODE_H
#define KGSNAPSHOTNODE_H

@class NSString, NSSet, NSDictionary;
@protocol KGNode;

#import <Foundation/Foundation.h>


@interface KGSnapshotNode : NSObject <KGNode>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSSet *labels; // ivar: _labels
@property (readonly, copy, nonatomic) NSDictionary *properties; // ivar: _properties
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(NSUInteger)arg0 labels:(id)arg1 properties:(id)arg2 ;
-(void)resolveIdentifier:(NSUInteger)arg0 ;


@end


#endif