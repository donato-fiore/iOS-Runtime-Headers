// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKASSETDOWNLOADPREAUTHORIZATION_H
#define CKASSETDOWNLOADPREAUTHORIZATION_H

@class NSData, NSDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CKAssetDownloadPreauthorization : NSObject <NSCopying>



@property (retain, nonatomic) NSData *contentResponseBody; // ivar: _contentResponseBody
@property (retain, nonatomic) NSDictionary *contentResponseHeaders; // ivar: _contentResponseHeaders
@property (retain, nonatomic) NSString *responseUUID; // ivar: _responseUUID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithResponseUUID:(id)arg0 contentResponseHeaders:(id)arg1 contentResponseBody:(id)arg2 ;


@end


#endif