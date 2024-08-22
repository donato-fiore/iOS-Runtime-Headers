// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMDSLTABLEMAP_H
#define BMDSLTABLEMAP_H

@class BMDSL, BMTableSchema;
@protocol BMTableStreamQuery, BMDSLRowTransform;



@interface BMDSLTableMap : BMDSL <BMTableStreamQuery>



@property (retain, nonatomic) BMTableSchema *schema; // ivar: _schema
@property (retain, nonatomic) NSObject<BMDSLRowTransform> *transform; // ivar: _transform
@property (retain, nonatomic) BMDSL *upstream; // ivar: _upstream


+(BOOL)supportsSecureCoding;
-(id)bpsPublisher;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUpstream:(id)arg0 transform:(id)arg1 schema:(id)arg2 ;
-(id)initWithUpstream:(id)arg0 transform:(id)arg1 schema:(id)arg2 name:(id)arg3 version:(unsigned int)arg4 ;
-(id)select:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif