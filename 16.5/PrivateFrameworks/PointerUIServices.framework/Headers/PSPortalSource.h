// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSPORTALSOURCE_H
#define PSPORTALSOURCE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PSPortalSource : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) unsigned int sourceContextID; // ivar: _sourceContextID
@property (readonly, nonatomic) NSUInteger sourceLayerRenderID; // ivar: _sourceLayerRenderID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSourceContextID:(unsigned int)arg0 sourceLayerRenderID:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif