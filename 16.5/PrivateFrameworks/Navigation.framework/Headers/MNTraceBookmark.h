// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNTRACEBOOKMARK_H
#define MNTRACEBOOKMARK_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MNTraceBookmark : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *imageData; // ivar: _imageData
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif