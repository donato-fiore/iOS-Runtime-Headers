// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ODCURAREPERSONALIZATIONRESULT_H
#define ODCURAREPERSONALIZATIONRESULT_H

@class NSURL, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface ODCurarePersonalizationResult : NSObject

@property (retain, nonatomic) NSURL *currentlyUsedModelPath; // ivar: _currentlyUsedModelPath
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (nonatomic) BOOL newPersonalizedModelIsSelected; // ivar: _newPersonalizedModelIsSelected
@property (retain, nonatomic) NSString *personalizedModelIdentifier; // ivar: _personalizedModelIdentifier
@property (retain, nonatomic) NSURL *personalizedModelPath; // ivar: _personalizedModelPath
@property (nonatomic) BOOL saveNewPersonalizedModel; // ivar: _saveNewPersonalizedModel


-(id)initWithNewPersonalizedModelPath:(id)arg0 currentlyUsedModelPath:(id)arg1 isSelected:(BOOL)arg2 saveModel:(BOOL)arg3 newPersonalizedModelIdentifier:(id)arg4 ;


@end


#endif