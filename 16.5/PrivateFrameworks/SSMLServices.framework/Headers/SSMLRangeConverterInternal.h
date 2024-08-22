// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSMLRANGECONVERTERINTERNAL_H
#define SSMLRANGECONVERTERINTERNAL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SSMLRangeConverterInternal : NSObject {
    ? ssml;
    ? $__lazy_storage_$_plainString;
    ? $__lazy_storage_$_converter;
}


@property (nonatomic, copy) NSString *plainString;
@property (nonatomic, copy) NSString *ssml;


-(id)init;
-(id)initWithSSML:(id)arg0 ;
-(struct _NSRange )stringRangeFrom:(struct _NSRange )arg0 ;


@end


#endif