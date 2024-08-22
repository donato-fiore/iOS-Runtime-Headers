// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNGUIDANCEJUNCTIONVIEWIMAGE_H
#define MNGUIDANCEJUNCTIONVIEWIMAGE_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MNGuidanceJunctionViewImage : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *imageData; // ivar: _imageData
@property (readonly, nonatomic) NSUInteger imageID; // ivar: _imageID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif