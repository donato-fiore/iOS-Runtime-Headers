// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRPERSONALIZATIONELEMENT_H
#define CRPERSONALIZATIONELEMENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CRPersonalizationElement : NSObject

@property (retain, nonatomic) id *data; // ivar: _data
@property (copy, nonatomic) NSString *elementId; // ivar: _elementId
@property (retain, nonatomic) id *param; // ivar: _param
@property (copy, nonatomic) id *personalizationMeasurementCreator; // ivar: _personalizationMeasurementCreator
@property (copy, nonatomic) id *personalizationResponseParser; // ivar: _personalizationResponseParser


-(id)init;
// -(id)initWithID:(id)arg0 param:(id)arg1 requestFunction:(id)arg2 responseFunction:(unk)arg3  ;


@end


#endif