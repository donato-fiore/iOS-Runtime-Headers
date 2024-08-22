// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLEUPDATEAUDIOINFO_H
#define FTMUTABLEUPDATEAUDIOINFO_H

@class NSString;


#import "FTUpdateAudioInfo.h"

@interface FTMutableUpdateAudioInfo : FTUpdateAudioInfo

@property (copy, nonatomic) NSString *product_id;
@property (copy, nonatomic) NSString *vendor_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif