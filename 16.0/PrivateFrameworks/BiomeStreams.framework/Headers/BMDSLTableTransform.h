// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMDSLTABLETRANSFORM_H
#define BMDSLTABLETRANSFORM_H

@class BMDSLBaseCodable, BMTableSchema, NSString;
@protocol BMDSLRowTransform;



@interface BMDSLTableTransform : BMDSLBaseCodable

@property (retain, nonatomic) NSObject<BMDSLRowTransform> *rowTransform; // ivar: _rowTransform
@property (retain, nonatomic) BMTableSchema *schema; // ivar: _schema
@property (readonly, copy, nonatomic) NSString *tableName; // ivar: _tableName


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRowTransform:(id)arg0 schema:(id)arg1 tableName:(id)arg2 ;
-(id)initWithRowTransform:(id)arg0 schema:(id)arg1 tableName:(id)arg2 name:(id)arg3 version:(unsigned int)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif