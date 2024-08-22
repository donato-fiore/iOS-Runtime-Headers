// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRHAPDESCRIPTIONATENDPOINT_H
#define HMMTRHAPDESCRIPTIONATENDPOINT_H

@class HMFObject, NSArray, NSString;



@interface HMMTRHAPDescriptionAtEndpoint : HMFObject

@property (retain, nonatomic) NSArray *categories; // ivar: _categories
@property (readonly) NSArray *fixedLabels; // ivar: _fixedLabels
@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSArray *partsList; // ivar: _partsList
@property (retain, nonatomic) NSArray *serviceDescriptions; // ivar: _serviceDescriptions


-(id)attributeDescriptions;
-(id)getCategories;
-(id)getFixedLabels;
-(id)getName;
-(id)getPartsList;
-(id)getServiceDescriptions;
-(id)init;
-(id)initWithType:(id)arg0 serviceDescriptions:(id)arg1 ;
-(id)initWithType:(id)arg0 serviceDescriptions:(id)arg1 name:(id)arg2 partsList:(id)arg3 fixedLabels:(id)arg4 ;


@end


#endif