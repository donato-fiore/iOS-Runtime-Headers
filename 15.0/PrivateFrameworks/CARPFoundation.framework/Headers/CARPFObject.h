// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARPFOBJECT_H
#define CARPFOBJECT_H

@class NSArray, NSString;
@protocol CARPFObject;

#import <Foundation/Foundation.h>


@interface CARPFObject : NSObject <CARPFObject>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *carpf_privateDescription;
@property (readonly, copy) NSString *carpf_shortDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) Class superclass;




@end


#endif