// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NFCVASCOMMANDCONFIGURATION_H
#define NFCVASCOMMANDCONFIGURATION_H

@class NSString, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NFCVASCommandConfiguration : NSObject <NSCopying>



@property (nonatomic) NSInteger mode; // ivar: _mode
@property (retain, nonatomic) NSString *passTypeIdentifier; // ivar: _passTypeIdentifier
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithVASMode:(NSInteger)arg0 passTypeIdentifier:(id)arg1 url:(id)arg2 ;


@end


#endif