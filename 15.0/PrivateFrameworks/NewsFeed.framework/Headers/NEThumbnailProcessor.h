// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NETHUMBNAILPROCESSOR_H
#define NETHUMBNAILPROCESSOR_H

@protocol TSImageProcessorType;

#import <Foundation/Foundation.h>


@interface NEThumbnailProcessor : NSObject <TSImageProcessorType>





-(id)init;
-(id)process:(id)arg0 ;
-(id)process:(id)arg0 imageFromCache:(id)arg1 ;


@end


#endif