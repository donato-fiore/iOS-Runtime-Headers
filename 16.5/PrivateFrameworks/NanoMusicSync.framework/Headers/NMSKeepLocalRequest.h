// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSKEEPLOCALREQUEST_H
#define NMSKEEPLOCALREQUEST_H

@class MPModelObject;

#import <Foundation/Foundation.h>


@interface NMSKeepLocalRequest : NSObject

@property (readonly, nonatomic) NSInteger enableState; // ivar: _enableState
@property (readonly, nonatomic) MPModelObject *modelObject; // ivar: _modelObject


-(id)initWithModelObject:(id)arg0 enableState:(NSInteger)arg1 ;
-(void)performWithOptions:(id)arg0 completion:(id)arg1 ;


@end


#endif