// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUNICLOUDCOVERFILECONVERTER_H
#define NUNICLOUDCOVERFILECONVERTER_H

@protocol NUNIFileConverter, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NUNICloudCoverFileConverter : NSObject <NUNIFileConverter>

 {
    NSObject<OS_dispatch_queue> *_privateQueue;
}




-(BOOL)_convertFileAt:(id)arg0 to:(id)arg1 error:(*id)arg2 ;
-(BOOL)convertFileAt:(id)arg0 to:(id)arg1 error:(*id)arg2 ;
-(id)init;


@end


#endif