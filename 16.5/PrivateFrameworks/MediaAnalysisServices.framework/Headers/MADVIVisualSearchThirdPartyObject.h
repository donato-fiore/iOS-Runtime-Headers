// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MADVIVISUALSEARCHTHIRDPARTYOBJECT_H
#define MADVIVISUALSEARCHTHIRDPARTYOBJECT_H

@class NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MADVIVisualSearchThirdPartyObject : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *imageURL; // ivar: _imageURL
@property (readonly, nonatomic) NSData *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSString *objectIdentifier; // ivar: _objectIdentifier
@property (readonly, nonatomic) NSString *thumbnailURL; // ivar: _thumbnailURL


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectIdentifier:(id)arg0 imageURL:(id)arg1 thumbnailURL:(id)arg2 metadata:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif