// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPUNKNOWNPRODUCTMETADATA_H
#define SPUNKNOWNPRODUCTMETADATA_H

@class NSURL, NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPUnknownProductMetadata : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSURL *image; // ivar: _image
@property (copy, nonatomic) NSArray *moreDescription; // ivar: _moreDescription
@property (nonatomic) CGFloat percentageX; // ivar: _percentageX
@property (nonatomic) CGFloat percentageY; // ivar: _percentageY
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 description:(id)arg1 percentageX:(CGFloat)arg2 percentageY:(CGFloat)arg3 image:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif