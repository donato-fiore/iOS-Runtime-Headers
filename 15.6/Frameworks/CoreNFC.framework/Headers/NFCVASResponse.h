// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NFCVASRESPONSE_H
#define NFCVASRESPONSE_H

@class NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NFCVASResponse : NSObject <NSCopying>



@property (readonly, retain, nonatomic) NSData *mobileToken; // ivar: _mobileToken
@property (readonly, nonatomic) NSInteger status; // ivar: _status
@property (readonly, retain, nonatomic) NSData *vasData; // ivar: _vasData


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithStatus:(NSInteger)arg0 data:(id)arg1 mobileToken:(id)arg2 ;


@end


#endif