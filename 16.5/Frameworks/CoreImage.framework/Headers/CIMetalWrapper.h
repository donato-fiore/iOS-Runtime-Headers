// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIMETALWRAPPER_H
#define CIMETALWRAPPER_H

@class NSMutableDictionary, NSString;


#import "CIFilter.h"

@interface CIMetalWrapper : CIFilter

@property (retain) NSMutableDictionary *_dict; // ivar: _dict
@property (copy) NSString *inputFilterName; // ivar: inputFilterName


-(id)attributes;
-(id)dummyImagesForImages:(id)arg0 ;
-(id)init;
-(id)inputKeys;
-(id)outputImage;
-(void)dealloc;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif