// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DETECTION_H
#define DETECTION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface Detection : NSObject <NSSecureCoding>



@property (nonatomic) CGRect bounds; // ivar: bounds
@property (nonatomic) NSInteger oid; // ivar: oid


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif