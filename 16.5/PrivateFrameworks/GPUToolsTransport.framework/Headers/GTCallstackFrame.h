// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTCALLSTACKFRAME_H
#define GTCALLSTACKFRAME_H

@class NSURL, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GTCallstackFrame : NSObject <NSSecureCoding>



@property (nonatomic) unsigned int column; // ivar: _column
@property (copy, nonatomic) NSURL *file; // ivar: _file
@property (copy, nonatomic) NSString *functionName; // ivar: _functionName
@property (nonatomic) unsigned int line; // ivar: _line


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif