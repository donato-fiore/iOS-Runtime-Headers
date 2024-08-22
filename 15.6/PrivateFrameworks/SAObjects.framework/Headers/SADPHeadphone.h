// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SADPHEADPHONE_H
#define SADPHEADPHONE_H

@class NSString;


#import "SADPDeviceDetail.h"

@interface SADPHeadphone : SADPDeviceDetail

@property (nonatomic) BOOL inOrOverEar;
@property (copy, nonatomic) NSString *position;


+(id)headphone;
+(id)headphoneWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif