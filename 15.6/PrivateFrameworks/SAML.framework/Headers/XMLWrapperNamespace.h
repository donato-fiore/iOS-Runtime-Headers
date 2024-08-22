// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XMLWRAPPERNAMESPACE_H
#define XMLWRAPPERNAMESPACE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface XMLWrapperNamespace : NSObject {
    ? _xmlNs;
}


@property (retain, nonatomic) NSString *href; // ivar: _href
@property (retain, nonatomic) NSString *prefix; // ivar: _prefix


-(?)xmlNsForNodeerror;
-(id)initWithNsNode:(struct _xmlNs *)arg0 error:(*id)arg1 ;


@end


#endif