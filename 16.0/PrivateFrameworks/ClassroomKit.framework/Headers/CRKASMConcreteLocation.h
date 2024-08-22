// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKASMCONCRETELOCATION_H
#define CRKASMCONCRETELOCATION_H

@class NSString;
@protocol CRKASMLocation;

#import <Foundation/Foundation.h>


@interface CRKASMConcreteLocation : NSObject <CRKASMLocation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithBackingLocation:(id)arg0 ;


@end


#endif