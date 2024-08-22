// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKVIRTUALCONFERENCEURLDESCRIPTOR_H
#define EKVIRTUALCONFERENCEURLDESCRIPTOR_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface EKVirtualConferenceURLDescriptor : NSObject

@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 URL:(id)arg1 ;


@end


#endif