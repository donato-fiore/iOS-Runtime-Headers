// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _KSCONTROLFILECONTROLLER_H
#define _KSCONTROLFILECONTROLLER_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface _KSControlFileController : NSObject {
    NSURL *_url;
}




-(BOOL)checkIfExists;
-(id)contents;
-(id)description;
-(id)initWithName:(id)arg0 inDirectory:(id)arg1 ;
-(void)reset;
-(void)setContents:(id)arg0 ;


@end


#endif