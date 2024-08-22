// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKPRODUCTSRESPONSE_H
#define SKPRODUCTSRESPONSE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SKProductsResponse : NSObject {
    id *_internal;
}


@property (readonly, nonatomic) NSArray *invalidProductIdentifiers;
@property (readonly, nonatomic) NSArray *products;


-(id)init;
-(void)_setInvalidIdentifiers:(id)arg0 ;


@end


#endif