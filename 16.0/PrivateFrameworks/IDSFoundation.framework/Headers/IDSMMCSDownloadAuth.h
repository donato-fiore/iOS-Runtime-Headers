// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSMMCSDOWNLOADAUTH_H
#define IDSMMCSDOWNLOADAUTH_H

@class NSString, NSDictionary, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IDSMMCSDownloadAuth : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *authURL;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation; // ivar: _dictionaryRepresentation
@property (readonly, nonatomic) NSString *ownerID;
@property (readonly, nonatomic) NSData *signature;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithSignature:(id)arg0 authURL:(id)arg1 ownerID:(id)arg2 ;


@end


#endif