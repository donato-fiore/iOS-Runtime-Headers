// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSVMEDIACONTENTTASTEITEM_H
#define SSVMEDIACONTENTTASTEITEM_H

@class NSString;
@protocol SSXPCCoding, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SSVMediaContentTasteItem : NSObject <SSXPCCoding, NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger contentType; // ivar: _contentType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *playlistGlobalID; // ivar: _playlistGlobalID
@property (readonly, nonatomic) NSInteger storeAdamID; // ivar: _storeAdamID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger tasteType; // ivar: _tasteType


+(BOOL)supportsSecureCoding;
-(id)_copyWithMediaContentTasteItemClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif