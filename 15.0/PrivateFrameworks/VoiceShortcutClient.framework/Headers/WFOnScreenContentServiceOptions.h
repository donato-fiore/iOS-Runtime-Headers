// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFONSCREENCONTENTSERVICEOPTIONS_H
#define WFONSCREENCONTENTSERVICEOPTIONS_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFOnScreenContentServiceOptions : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *supportedItemClasses; // ivar: _supportedItemClasses


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSupportedItemClasses:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif