// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XRVMREGIONANNOTATION_H
#define XRVMREGIONANNOTATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface XRVMRegionAnnotation : NSObject <NSSecureCoding>

 {
    NSUInteger _baseAddress;
    *int _pageMap;
    unsigned int _vpages;
}




+(BOOL)supportsSecureCoding;
-(id)initSamplingRegion:(id)arg0 inTask:(unsigned int)arg1 updateRegionStatistics:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(int)dispositionForPage:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif