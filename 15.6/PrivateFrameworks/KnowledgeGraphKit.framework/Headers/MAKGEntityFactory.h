// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAKGENTITYFACTORY_H
#define MAKGENTITYFACTORY_H

@protocol KGEntityFactory;

#import <Foundation/Foundation.h>

#import "MAGraphSpecification.h"

@interface MAKGEntityFactory : NSObject <KGEntityFactory>



@property (readonly, nonatomic) MAGraphSpecification *specification; // ivar: _specification


-(id)edgeWithIdentifier:(NSUInteger)arg0 labels:(id)arg1 weight:(float)arg2 properties:(id)arg3 sourceNode:(id)arg4 targetNode:(id)arg5 ;
-(id)initWithSpecification:(id)arg0 ;
-(id)nodeWithIdentifier:(NSUInteger)arg0 labels:(id)arg1 weight:(float)arg2 properties:(id)arg3 ;


@end


#endif