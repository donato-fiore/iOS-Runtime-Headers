// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPASSTILEIMAGE_H
#define PKPASSTILEIMAGE_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKImage.h"

@interface PKPassTileImage : NSObject <NSSecureCoding>



@property (readonly, nonatomic) PKImage *image; // ivar: _image
@property (readonly, copy, nonatomic) NSData *imageHash; // ivar: _imageHash
@property (copy, nonatomic) NSString *imageName; // ivar: _imageName
@property (readonly, nonatomic, getter=isResolved) BOOL resolved; // ivar: _resolved
@property (copy, nonatomic) NSString *symbolName; // ivar: _symbolName
@property (nonatomic) NSInteger tintColor; // ivar: _tintColor


+(BOOL)supportsSecureCoding;
+(id)_createForDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToUnresolvedImage:(id)arg0 ;
-(NSUInteger)hash;
-(id)_init;
-(id)createResolvedImageWithBundle:(id)arg0 privateBundle:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif