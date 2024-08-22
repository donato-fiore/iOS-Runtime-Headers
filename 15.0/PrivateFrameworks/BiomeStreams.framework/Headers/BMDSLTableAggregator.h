// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMDSLTABLEAGGREGATOR_H
#define BMDSLTABLEAGGREGATOR_H

@class BMDSLAggregator, NSArray;



@interface BMDSLTableAggregator : BMDSLAggregator

@property (readonly, copy, nonatomic) NSArray *classKeyPaths; // ivar: _classKeyPaths
@property (readonly, copy, nonatomic) NSArray *classNames; // ivar: _classNames
@property (retain, nonatomic) NSArray *transforms; // ivar: _transforms


+(BOOL)supportsSecureCoding;
-(id)bpsAggregator;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTableTransforms:(id)arg0 classNames:(id)arg1 ;
-(id)initWithTableTransforms:(id)arg0 classNames:(id)arg1 classKeyPaths:(id)arg2 ;
-(id)initWithTableTransforms:(id)arg0 classNames:(id)arg1 classKeyPaths:(id)arg2 name:(id)arg3 version:(unsigned int)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif