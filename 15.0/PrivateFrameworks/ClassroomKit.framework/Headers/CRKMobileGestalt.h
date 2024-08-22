// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKMOBILEGESTALT_H
#define CRKMOBILEGESTALT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CRKMobileGestalt : NSObject

@property (readonly, nonatomic) NSUInteger availableBytes;
@property (readonly, copy, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) CGFloat mainScreenScale;
@property (readonly, nonatomic) CGSize mainScreenSizeInPixels;
@property (readonly, copy, nonatomic) NSString *productVersion;
@property (readonly, copy, nonatomic) NSString *serialNumber;


+(id)sharedGestalt;
-(id)answerForQuestion:(struct __CFString *)arg0 ;
-(id)answerForQuestion:(struct __CFString *)arg0 ofClass:(Class)arg1 ;


@end


#endif