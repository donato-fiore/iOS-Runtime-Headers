// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISRESOURCEMETADATA_H
#define ISRESOURCEMETADATA_H

@class NSString, NSNumber;
@protocol ISResourceMetadata;

#import <Foundation/Foundation.h>


@interface ISResourceMetaData : NSObject <ISResourceMetadata>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSNumber *dimension; // ivar: _dimension
@property (readonly) NSUInteger hash;
@property (retain) NSString *name; // ivar: _name
@property (retain) NSNumber *scale; // ivar: _scale
@property BOOL selectedVariant; // ivar: _selectedVariant
@property (readonly) Class superclass;




@end


#endif