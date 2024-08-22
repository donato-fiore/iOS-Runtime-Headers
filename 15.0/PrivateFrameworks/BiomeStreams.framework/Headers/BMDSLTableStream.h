// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMDSLTABLESTREAM_H
#define BMDSLTABLESTREAM_H

@class BMDSL;
@protocol BMTableStreamQuery, BMTableQueryExpression;



@interface BMDSLTableStream : BMDSL <BMTableStreamQuery>



@property (retain, nonatomic) NSObject<BMTableQueryExpression> *expression; // ivar: _expression
@property (retain, nonatomic) BMDSL *upstream; // ivar: _upstream


+(BOOL)supportsSecureCoding;
-(id)bpsPublisher;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUpstream:(id)arg0 expression:(id)arg1 ;
-(id)initWithUpstream:(id)arg0 expression:(id)arg1 name:(id)arg2 version:(unsigned int)arg3 ;
-(id)select:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif