// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXJSONOBJECTMERGERCLASSPROVIDER_H
#define SXJSONOBJECTMERGERCLASSPROVIDER_H

@class NSString;
@protocol SXJSONObjectMergerClassProviding;

#import <Foundation/Foundation.h>


@interface SXJSONObjectMergerClassProvider : NSObject <SXJSONObjectMergerClassProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) Class objectClass; // ivar: _objectClass
@property (readonly) Class superclass;


-(Class)classForObject:(id)arg0 specVersion:(id)arg1 ;
-(id)initWithObjectClass:(Class)arg0 ;


@end


#endif