// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef S3CONTENTCONFIG_H
#define S3CONTENTCONFIG_H

@class NSString;

#import <Foundation/Foundation.h>


@interface S3ContentConfig : NSObject

@property (retain, nonatomic) NSString *bucket; // ivar: _bucket
@property (retain, nonatomic) NSString *filename; // ivar: _filename


-(id)initWithFilename:(id)arg0 bucket:(id)arg1 ;


@end


#endif