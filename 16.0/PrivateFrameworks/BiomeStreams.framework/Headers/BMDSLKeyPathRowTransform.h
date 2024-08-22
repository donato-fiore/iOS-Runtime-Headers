// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMDSLKEYPATHROWTRANSFORM_H
#define BMDSLKEYPATHROWTRANSFORM_H

@class BMDSLBaseCodable, NSArray;
@protocol BMDSLRowTransform;



@interface BMDSLKeyPathRowTransform : BMDSLBaseCodable <BMDSLRowTransform>



@property (copy, nonatomic) NSArray *columnNames; // ivar: _columnNames
@property (copy, nonatomic) NSArray *keyPaths; // ivar: _keyPaths


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyPaths:(id)arg0 columnNames:(id)arg1 ;
-(id)initWithKeyPaths:(id)arg0 columnNames:(id)arg1 name:(id)arg2 version:(unsigned int)arg3 ;
-(id)rowFromInput:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif