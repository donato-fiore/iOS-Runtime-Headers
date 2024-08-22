// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHIPPLUGINCLUSTERDESCRIPTION_H
#define CHIPPLUGINCLUSTERDESCRIPTION_H

@class HMFObject, NSDictionary, NSNumber, NSString;



@interface CHIPPluginClusterDescription : HMFObject

@property (retain, nonatomic) NSDictionary *arguments; // ivar: _arguments
@property (readonly) Class clusterClass; // ivar: _clusterClass
@property (readonly) SEL clusterSelector; // ivar: _clusterSelector
@property (copy, nonatomic) id *mapValue; // ivar: _mapValue
@property (retain, nonatomic) NSDictionary *paramsArguments; // ivar: _paramsArguments
@property (retain, nonatomic) Class paramsClass; // ivar: _paramsClass
@property (retain, nonatomic) NSNumber *paramsIndex; // ivar: _paramsIndex
@property (retain, nonatomic) id *primaryArg; // ivar: _primaryArg
@property (retain, nonatomic) NSNumber *primaryArgIndex; // ivar: _primaryArgIndex
@property (retain, nonatomic) NSString *primaryArgType; // ivar: _primaryArgType


-(id)initWithClass:(id)arg0 selectorString:(id)arg1 ;


@end


#endif