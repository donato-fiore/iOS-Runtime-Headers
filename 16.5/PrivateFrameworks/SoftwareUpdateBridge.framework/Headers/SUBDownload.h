// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUBDOWNLOAD_H
#define SUBDOWNLOAD_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SUBDescriptor.h"
#import "SUBProgress.h"

@interface SUBDownload : NSObject <NSSecureCoding>



@property (retain, nonatomic) SUBDescriptor *descriptor; // ivar: _descriptor
@property (retain, nonatomic) SUBProgress *progress; // ivar: _progress


+(BOOL)supportsSecureCoding;
+(id)downloadWithDescriptor:(id)arg0 andProgress:(id)arg1 ;
-(id)copy;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif