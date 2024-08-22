// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAKGENTITYFACTORY_H
#define MAKGENTITYFACTORY_H

@protocol KGEntityFactory;

#import <Foundation/Foundation.h>

#import "MAGraphSpecification.h"

@interface MAKGEntityFactory : NSObject <KGEntityFactory>



@property (readonly, nonatomic) MAGraphSpecification *specification; // ivar: _specification


-(id)edgeWithIdentifier:(NSUInteger)arg0 labels:(id)arg1 properties:(id)arg2 sourceNode:(id)arg3 targetNode:(id)arg4 ;
-(id)initWithSpecification:(id)arg0 ;
-(id)nodeWithIdentifier:(NSUInteger)arg0 labels:(id)arg1 properties:(id)arg2 ;


@end


#endif