// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKREMOTETHUMBNAILKEY_H
#define PKREMOTETHUMBNAILKEY_H

@class NSDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKRemoteThumbnailKey : NSObject <NSCopying>



@property (retain, nonatomic) NSDictionary *requestDictionary; // ivar: _requestDictionary
@property (retain, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRemoteThumbnailKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif