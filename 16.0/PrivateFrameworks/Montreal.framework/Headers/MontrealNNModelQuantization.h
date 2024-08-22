// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MONTREALNNMODELQUANTIZATION_H
#define MONTREALNNMODELQUANTIZATION_H

@class NSString, NSNumber;
@protocol MontrealNNDescriptionProtocol;


#import "MontrealNNDescription.h"

@interface MontrealNNModelQuantization : MontrealNNDescription <MontrealNNDescriptionProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) NSString *weightStorage; // ivar: _weightStorage
@property (readonly) NSNumber *weightStorageRange; // ivar: _weightStorageRange


-(id)initWithDictionary:(id)arg0 ;


@end


#endif