// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGRE2PREFILTERTREE_H
#define SGRE2PREFILTERTREE_H

@class NSData;

#import <Foundation/Foundation.h>


@interface SGRe2PrefilterTree : NSObject {
    NSData *_data;
    *unsigned short _rpns;
    *unsigned short _h1;
    *unsigned short _h2;
    *unsigned short _h3;
    char * _s1;
    char * _s2;
    char * _s3;
    unsigned short _nrpns;
    unsigned short _n1;
    unsigned short _n2;
    unsigned short _n3;
}




-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)regexpIdsThatMightMatchUtf8:(char *)arg0 ;


@end


#endif