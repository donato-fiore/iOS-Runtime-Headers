// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSENCODINGDETECTIONPLACEHOLDER_H
#define NSENCODINGDETECTIONPLACEHOLDER_H


#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSEncodingDetectionPlaceholder : NSObject {
    NSUInteger nsEncoding;
    unsigned int cfEncoding;
    NSString *string;
    char * bytes;
    NSUInteger bytesLength;
    char * bytesStart;
}


@property (readonly) char * bytes;
@property (readonly) NSUInteger bytesLength;
@property (readonly) unsigned int cfEncoding;
@property (readonly) NSUInteger nsEncoding;
@property (readonly) NSString *string;


+(id)placeholderForDetector:(id)arg0 ;
-(id)debugDescription;
-(void)dealloc;


@end


#endif