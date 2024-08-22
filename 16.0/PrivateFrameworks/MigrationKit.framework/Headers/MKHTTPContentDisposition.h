// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKHTTPCONTENTDISPOSITION_H
#define MKHTTPCONTENTDISPOSITION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MKHTTPContentDisposition : NSObject

@property (copy, nonatomic) NSString *filename; // ivar: _filename
@property (copy, nonatomic) NSString *folder; // ivar: _folder


-(id)initWithHeaderValue:(id)arg0 ;


@end


#endif