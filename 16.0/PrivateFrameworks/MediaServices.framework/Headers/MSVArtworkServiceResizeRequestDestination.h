// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSVARTWORKSERVICERESIZEREQUESTDESTINATION_H
#define MSVARTWORKSERVICERESIZEREQUESTDESTINATION_H

@class NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MSVArtworkServiceResizeRequestDestination : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat compressionQuality; // ivar: _compressionQuality
@property (readonly, nonatomic) NSURL *destinationURL; // ivar: _destinationURL
@property (readonly, nonatomic) NSInteger format; // ivar: _format
@property (readonly, nonatomic) CGSize size; // ivar: _size


+(BOOL)supportsSecureCoding;
+(id)destinationWithFormat:(NSInteger)arg0 size:(struct CGSize )arg1 url:(id)arg2 ;
+(id)jpegDestinationWithSize:(struct CGSize )arg0 compressionQuality:(CGFloat)arg1 url:(id)arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFormat:(NSInteger)arg0 size:(struct CGSize )arg1 compressionQuality:(CGFloat)arg2 destinationURL:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif