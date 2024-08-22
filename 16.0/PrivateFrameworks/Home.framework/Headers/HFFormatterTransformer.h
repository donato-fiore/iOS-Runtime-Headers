// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFFORMATTERTRANSFORMER_H
#define HFFORMATTERTRANSFORMER_H

@class NSFormatter;



@interface HFFormatterTransformer : NSFormatter

@property (copy, nonatomic) NSFormatter *sourceFormatter; // ivar: _sourceFormatter
@property (copy, nonatomic) id *transformBlock; // ivar: _transformBlock


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSourceFormatter:(id)arg0 transformBlock:(id)arg1 ;
-(id)stringForObjectValue:(id)arg0 ;


@end


#endif