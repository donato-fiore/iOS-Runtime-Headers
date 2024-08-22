// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMTEMBEDDEDDATARESETBACKEDERASEPRIMITIVES_H
#define DMTEMBEDDEDDATARESETBACKEDERASEPRIMITIVES_H

@class NSString;
@protocol DMTErasePrimitives;

#import <Foundation/Foundation.h>


@interface DMTEmbeddedDataResetBackedErasePrimitives : NSObject <DMTErasePrimitives>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)performEraseWithCompletion:(id)arg0 ;


@end


#endif