// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IFRESOURCEMETADATA_H
#define IFRESOURCEMETADATA_H

@class NSString, NSNumber;
@protocol IFResourceMetadata;

#import <Foundation/Foundation.h>


@interface IFResourceMetadata : NSObject <IFResourceMetadata>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSNumber *dimension; // ivar: _diension
@property (readonly) NSUInteger hash;
@property (retain) NSString *name; // ivar: _name
@property (retain) NSNumber *scale; // ivar: _scale
@property BOOL selectedVariant; // ivar: _selectedVariant
@property (readonly) Class superclass;


+(id)metadataWithFileName:(id)arg0 ;


@end


#endif