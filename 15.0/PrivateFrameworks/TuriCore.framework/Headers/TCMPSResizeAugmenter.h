// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCMPSRESIZEAUGMENTER_H
#define TCMPSRESIZEAUGMENTER_H

@class NSString;
@protocol TCMPSImageAugmenting;

#import <Foundation/Foundation.h>


@interface TCMPSResizeAugmenter : NSObject <TCMPSImageAugmenting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (readonly) Class superclass;


-(id)imageAugmentedFromImage:(id)arg0 generator:(id)arg1 ;
-(id)initWithSize:(struct CGSize )arg0 ;


@end


#endif