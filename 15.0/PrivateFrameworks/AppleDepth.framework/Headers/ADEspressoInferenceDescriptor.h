// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADESPRESSOINFERENCEDESCRIPTOR_H
#define ADESPRESSOINFERENCEDESCRIPTOR_H

@class NSDictionary, NSURL;

#import <Foundation/Foundation.h>


@interface ADEspressoInferenceDescriptor : NSObject {
    NSDictionary *_layoutNames;
}


@property (readonly, nonatomic) NSURL *networkURL; // ivar: _networkURL


-(id)configurationNameForLayout:(NSUInteger)arg0 ;
-(id)initWithUrl:(id)arg0 layoutNames:(id)arg1 ;


@end


#endif