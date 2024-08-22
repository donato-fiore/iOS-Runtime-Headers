// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXCOMPONENTMERGERCLASSPROVIDER_H
#define SXCOMPONENTMERGERCLASSPROVIDER_H

@class NSString;
@protocol SXJSONObjectMergerClassProviding;

#import <Foundation/Foundation.h>


@interface SXComponentMergerClassProvider : NSObject <SXJSONObjectMergerClassProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(Class)classForObject:(id)arg0 specVersion:(id)arg1 ;


@end


#endif