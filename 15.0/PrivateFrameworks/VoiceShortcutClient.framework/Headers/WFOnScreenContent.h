// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFONSCREENCONTENT_H
#define WFONSCREENCONTENT_H

@class NSURL, INFile;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFOnScreenContent : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) INFile *file; // ivar: _file


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 file:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif