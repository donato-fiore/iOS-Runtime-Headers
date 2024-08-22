// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CVNLPMODELBASE_H
#define CVNLPMODELBASE_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "CVNLPPerformance.h"

@interface CVNLPModelBase : NSObject

@property (readonly, nonatomic) NSDictionary *options; // ivar: _options
@property (readonly, nonatomic) CVNLPPerformance *perfResults; // ivar: _perfResults


-(NSUInteger)_blob_size:(struct ? )arg0 ;
-(id)initWithOptions:(id)arg0 ;
-(id)performanceResults;
-(void)_copy_data_from_blob:(struct ? )arg0 to:(*void)arg1 ;
-(void)_copy_data_from_blob:(struct ? )arg0 toPtr:(*float)arg1 ;
-(void)_copy_data_to_blob:(*float)arg0 to:(struct ? )arg1 ;
-(void)_copy_data_to_blob:(id)arg0 toBuffer:(struct ? )arg1 ;
-(void)_copy_data_to_blob_repeated:(id)arg0 to:(struct ? )arg1 ;


@end


#endif