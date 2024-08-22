// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLASSETCOLLECTIONGENERATIONRESULT_H
#define PLASSETCOLLECTIONGENERATIONRESULT_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface PLAssetCollectionGenerationResult : NSObject

@property (readonly, nonatomic) BOOL frequentLocationsDidChange; // ivar: _frequentLocationsDidChange
@property (readonly, nonatomic) NSSet *insertedOrUpdatedMoments; // ivar: _insertedOrUpdatedMoments


-(id)initWithInsertedOrUpdatedMoments:(id)arg0 frequentLocationsDidChange:(BOOL)arg1 ;


@end


#endif