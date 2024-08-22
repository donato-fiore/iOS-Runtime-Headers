// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ODNSERVICES_H
#define ODNSERVICES_H


#import <Foundation/Foundation.h>


@interface ODNServices : NSObject



-(void)fetchConfigWithCompletion:(id)arg0 ;
-(void)fetchGeoCodingsForAddresses:(id)arg0 completion:(id)arg1 ;
-(void)updateGeoCodingsForAddresses:(id)arg0 locations:(id)arg1 completion:(id)arg2 ;


@end


#endif