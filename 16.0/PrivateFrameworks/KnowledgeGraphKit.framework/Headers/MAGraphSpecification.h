// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAGRAPHSPECIFICATION_H
#define MAGRAPHSPECIFICATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MAGraphReference.h"

@interface MAGraphSpecification : NSObject <NSCopying>



@property (retain) Class defaultEdgeClass; // ivar: _defaultEdgeClass
@property (retain) Class defaultNodeClass; // ivar: _defaultNodeClass
@property NSInteger persistenceOptions; // ivar: _persistenceOptions
@property (retain, nonatomic) MAGraphReference *rootGraphReference; // ivar: _rootGraphReference


-(Class)edgeClassWithLabel:(id)arg0 domain:(unsigned short)arg1 ;
-(Class)nodeClassWithLabel:(id)arg0 domain:(unsigned short)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)enumerateEdgeClassesUsingBlock:(id)arg0 ;
-(void)enumerateNodeClassesUsingBlock:(id)arg0 ;


@end


#endif