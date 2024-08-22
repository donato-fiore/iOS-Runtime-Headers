// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARTECHNIQUEGATHERCONTEXT_H
#define ARTECHNIQUEGATHERCONTEXT_H

@class NSString, NSArray;
@protocol NSSecureCoding, ARResultDataContext;

#import <Foundation/Foundation.h>


@interface ARTechniqueGatherContext : NSObject <NSSecureCoding, ARResultDataContext>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *gatheredData;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *parentContext; // ivar: _parentContext
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(NSInteger)cameraPosition;
-(id)anchorsToAdd;
-(id)anchorsToRemove;
-(id)captureGatheredData;
-(id)imageData;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParentContext:(id)arg0 ;
-(id)resultDataOfClass:(Class)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif