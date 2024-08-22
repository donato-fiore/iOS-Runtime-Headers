// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VITHIRDPARTYOBJECT_H
#define VITHIRDPARTYOBJECT_H

@class NSString, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VIThirdPartyObject : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *imageURL; // ivar: _imageURL
@property (readonly, nonatomic) NSData *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSString *objectIdentifier; // ivar: _objectIdentifier
@property (readonly, nonatomic) NSString *thumbnailURL; // ivar: _thumbnailURL


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithObjectIdentifier:(id)arg0 imageURL:(id)arg1 thumbnailURL:(id)arg2 metadata:(id)arg3 ;


@end


#endif