// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKAKSPARAMETERS_H
#define TKAKSPARAMETERS_H

@class NSData;

#import <Foundation/Foundation.h>


@interface TKAKSParameters : NSObject {
    *aks_params_s _params;
    NSData *_encoded;
}


@property (readonly) *void bytes;
@property (readonly, copy) NSData *data;
@property (readonly) NSUInteger length;


-(id)description;
-(id)init;
-(id)initWithParameters:(id)arg0 ;
-(void)dealloc;
-(void)setNumber:(NSInteger)arg0 forKey:(unsigned int)arg1 ;


@end


#endif