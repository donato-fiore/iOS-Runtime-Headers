// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFPEMENCODING_H
#define WFPEMENCODING_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface WFPEMEncoding : NSObject

@property (copy, nonatomic) NSData *data; // ivar: _data
@property (copy, nonatomic) NSString *type; // ivar: _type


+(id)decodePEM:(id)arg0 error:(*id)arg1 ;
-(id)encodedPEM;
-(id)initWithType:(id)arg0 data:(id)arg1 ;


@end


#endif