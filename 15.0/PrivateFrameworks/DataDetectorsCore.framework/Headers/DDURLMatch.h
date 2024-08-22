// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDURLMATCH_H
#define DDURLMATCH_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DDURLMatch : NSObject {
    _NSRange _range;
    NSString *_url;
}




-(NSInteger)compare:(id)arg0 ;
-(id)description;
-(id)initWithRange:(struct _NSRange )arg0 url:(id)arg1 ;
-(id)url;
-(struct _NSRange )range;
-(void)dealloc;


@end


#endif